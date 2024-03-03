#include <iostream>

using namespace std;

// Dynamic Typing (Gõ động)

// 2 ways to achieve dynamic typing

// Way 1: void* Pointers
int main()
{
    int x = 42;
    float y = 3.14f;
    std::string z = "Hello world!";

    void *void_ptr;

    void_ptr = &x;
    std::cout << "Int value: " << *(static_cast<int *>(void_ptr)) << std::endl;

    void_ptr = &y;
    std::cout << "Float value: " << *(static_cast<float *>(void_ptr)) << std::endl;

    void_ptr = &z;
    std::cout << "String value: " << *(static_cast<std::string *>(void_ptr)) << std::endl;

    return 0;
}

// Way 2: std::any
int main()
{
    std::any any_value;

    any_value = 42;
    std::cout << "int value: " << std::any_cast<int>(any_value) << std::endl;

    any_value = 3.14;
    std::cout << "double value: " << std::any_cast<double>(any_value) << std::endl;

    any_value = std::string("Hello, world!");
    std::cout << "string value: " << std::any_cast<std::string>(any_value) << std::endl;

    return 0;
}
