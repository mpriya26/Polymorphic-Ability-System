#include <iostream>

class Ability
{
public:
    virtual void activate() = 0;
};

class Walk : public Ability
{
public:
    void activate()
    {
        std::cout << "Walking\n";
    }
};

class Jump : public Ability
{
public:
    void activate()
    {
        std::cout << "Jumping\n";
    }
};

class Run : public Ability
{
public:
    void activate()
    {
        std::cout << "Running\n"
    }
};

int main()
{
    std::cout << "Hello world";
}