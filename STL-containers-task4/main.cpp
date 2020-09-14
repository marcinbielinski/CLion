#include <functional>
#include <vector>
#include <queue>
#include <iostream>


template <typename T> void print_queue(T& q) {
    while (!q.empty()) {
        std::cout << q.top() << " ";
        q.pop();
    }
    std::cout << '\n';
}

class TaskQueue
{
public:
    TaskQueue(){}
    bool empty()
    {
        return numbers.empty();
    }
    void addTask(int val)
    {
        numbers.push(val);
    }
    int getNext()
    {
        numbers.pop();
    }
    std::priority_queue<int> numbers;
};

int main() {
    TaskQueue t;

//    std::priority_queue<int, std::vector<int>, std::greater<>> numbers;
//
//    numbers.push(7);
//    numbers.push(3);
//    numbers.push(4);
//    numbers.pop();
//    print_queue(numbers);

    t.addTask(7);
    t.addTask(3);
    t.addTask(4);

    std::cout << "Top element: " << t.getNext() << "\n";

//    while (! t.empty()) {
//        std::cout << t.getNext() << std::endl;
//    }
    return 0;
}
