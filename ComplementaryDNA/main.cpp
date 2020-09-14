#include <iostream>
#include <string>
#include <algorithm>
#include <map>

void DNAStrand(std::string& dna) {
    // Take ATTGC - Return complementary TAACG
    char replace;
    std::map<char, char> map1 = { {'A', 'T'}, {'T', 'A'},
                                  {'C', 'G'}, {'G', 'C'} };
    std::string& str = dna;
    std::replace_if(str.begin(),str.end(), [&](char elem)
    { return (map1.find(elem) != map1.end()) && (replace = map1[elem]); }, replace);
};
//
//const std::map<char, char> map1 =
//        {
//                {'A', 'T'},
//                {'T', 'A'},
//                {'C', 'G'},
//                {'G', 'C'},
//        };
//
//std::string DNAStrand(std::string dna)
//{
//    for (char& c : dna)
//    {
//        c = map1.at(c);
//    }
//    return dna;
//}

int main() {
    std::string xd ("ATCG");
    DNAStrand(xd);
    std::cout << xd;
    return 0;
}
