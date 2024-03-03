// A reference (tham chieu) is an alias for an existing variable, meaning it’s a different name for the same memory location.
// Unlike pointers, references cannot be null, and they must be initialized when they are declared.
// Once a reference is initialized, it cannot be changed to refer to another variable.

// General format
// dataType &referenceName = existingVariable;

#include <iostream>
using namespace std;

int num = 10;
int &ref = num;

// Function parameters
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 10;
    std::cout << "Before Swap: x = " << x << ", y = " << y << std::endl;

    swap(x, y);
    std::cout << "After Swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}