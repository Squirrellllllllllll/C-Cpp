#include <iostream>

using namespace std;

// A Pointer is a variable that stores the memory address of another variable or function.
// It points to the location of the variable memory, and it allows you to access and modify the value indirectly.

// General format
// dataType *pointerName;

// initializing pointer
int num = 10;
int *ptr = &num; // Pointer ptr points to the memory access of num

// accessing value using pointer
int value = *ptr;

// Function pointer
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*func_ptr)(int, int) = add;
    int test = func_ptr(4, 5);

    std::cout << "Test: " << test << std::endl;
    return 0;
}
