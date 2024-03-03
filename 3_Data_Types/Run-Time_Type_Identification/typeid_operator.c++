// typeid is an operator that returns a reference to an object of type std::type_info, which contains information about the type of the object.The header file<typeinfo> should be included to use typeid.

#include <iostream>
#include <typeinfo>

class Base
{
    virtual void dummy() {}
};
class Derived : public Base
{
};

int main()
{
    Base *base_ptr = new Derived;

    // Using typied to get the type of the object
    std::cout << "Type: " << typeid(*base_ptr).name() << "\n";

    delete base_ptr;
    return 0;
}
