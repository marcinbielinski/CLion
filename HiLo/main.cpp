#include <iostream>
#include <memory>

template <class T>
struct Node
{
    std::unique_ptr<Node<T>> next;
    T value{};
};


template<class T>
class LinkedList
{
public:
    LinkedList() = default;

    void add_to_back(T elem_to_add)
    {
        if (headNode == nullptr)
        {
            std::cout << "head node is nullptr" <<std::endl;
            headNode = std::make_unique<Node<T>>();
            headNode->value = elem_to_add;
        }
        else
        {
            std::cout << "head node is not nullptr" <<std::endl;
            auto& lastNode = find_last_node(*headNode); // to pokazuje ostatni node w lancuchu, aka taki bez next*
            // lastNode.next w tym momencie jest pustym unique_ptr, trza mu tam wrzucic kolejny node
            lastNode.next = std::make_unique<Node<T>>();
            lastNode.next->value = elem_to_add;
        }
    }

void print_all()
{
    if(headNode != nullptr)
        print_rec_part(*headNode);
}

private:
    std::unique_ptr<Node<T>> headNode{nullptr};
    // int a{0}
    // finds last valid node recursively

    Node<T>& find_last_node(Node<T>& node)
    {
        if (node.next == nullptr)
            return node;
        else
            find_last_node(*(node.next));
    }

    void print_rec_part(Node<T>& from)
    {
        if(from.next == nullptr)
        {
            std::cout << from.value << std::endl;
            return;
        }
        else
        {
            std::cout << from.value << std::endl;
            print_rec_part(*(from.next));
        }
    }
};


int main()
{
    LinkedList<int> lista;
    lista.add_to_back(1);
    lista.add_to_back(2);
    lista.add_to_back(3);
    lista.add_to_back(4);
    lista.print_all();
    return 0;
}