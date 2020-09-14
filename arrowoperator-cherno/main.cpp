#include <iostream>

class Entity
{
public:
    int x;
    void Print() { std::cout << "Hello!" << std::endl; }
};

class ScopedPtr
{
private:
    Entity* m_Obj;
public:
    ScopedPtr(Entity* entity)
        : m_Obj(entity)
    {
    }

    ~ScopedPtr()
    {
        std::cout << "I was deleted!" << std::endl;
        delete m_Obj;
    }

    Entity* operator->()
    {
        return m_Obj;
    }
    const Entity* operator->() const
    {
        return m_Obj;
    }
};
int main() {
//    Entity e;
//    e.Print();
//
//    Entity* ptr = &e;
////    (*ptr).Print(); // dereferencing the pointer and calling .Print()
//
//    ptr->Print(); // it does the same but using arrow operator
//    ptr-> x = 2;

// -----------------

    ScopedPtr entity = new Entity();
    entity->Print();
    return 0;
}
