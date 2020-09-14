#include <iostream>
#include <queue>

class TaskQueue
{
public:
    TaskQueue()= default;;
    [[nodiscard]] bool empty () const
    {
        return numbers.empty();
    }
    void addTask(int val)
    {
        numbers.push(val);
    }
    int getNext()
    {
        auto elem = numbers.top();
        numbers.pop();
        return elem;
    }
    std::priority_queue<int, std::vector<int>, std::greater<>> numbers;
};

int main() {
    TaskQueue t;

    t.addTask(7);
    t.addTask(3);
    t.addTask(4);

    while (! t.empty())
    {
        std::cout << t.getNext() << std::endl;
    }
    return 0;
}