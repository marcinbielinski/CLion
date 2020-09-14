#pragma once

class Parent1 {
protected:
    int m_value;
public:
    static int find_short(std::string& str);

    explicit Parent1(int value)
        : m_value(value)
    {
    }
    virtual ~Parent1() = default;

//    virtual void parentInfo();
};
