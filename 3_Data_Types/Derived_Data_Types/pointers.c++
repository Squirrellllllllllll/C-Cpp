#include <iostream>

using namespace std;

// Pointers: Use to store the memory address of a variable
int num2 = 42;
int *pNum = &num2;

int main()
{
    std::cout << "Test: " << pNum << std::endl;
    return 0;
}