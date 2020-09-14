#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

typedef map<string, string> TStrStrMap;
typedef pair<string, string> TStrStrPair;

TStrStrMap::const_iterator FindPrefix(const TStrStrMap& map, const string& search_for) {
    auto i = map.lower_bound(search_for);
    if (i != map.end()) {
        const string& key = i->first;
        if (key.compare(0, search_for.size(), search_for) == 0) // Really a prefix?
            return i;
    }
    return map.end();
}

void Test(const TStrStrMap& map, const string& search_for) {
    cout << search_for;
    auto i = FindPrefix(map, search_for);
    if (i != map.end())
        cout << '\t' << i->first << ", " << i->second;
    cout << endl;
}

int main(int argc, char *argv[])
{
    TStrStrMap tMap;

    tMap.insert(TStrStrPair("John", "AA"));
    tMap.insert(TStrStrPair("Mary", "BBB"));
    tMap.insert(TStrStrPair("Mother", "A"));
    tMap.insert(TStrStrPair("Marlon", "C"));

    Test(tMap, "Marl");
    Test(tMap, "Mo");
    Test(tMap, "ther");
    Test(tMap, "Mad");
    Test(tMap, "Mom");
    Test(tMap, "Perr");
    Test(tMap, "Jo");

    return 0;
}