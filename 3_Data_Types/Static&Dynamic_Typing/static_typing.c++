#include <iostream>

using namespace std;

// Static Typing (Gõ tĩnh / Gán)
int main()
{
    int num = 42;
    double pi = 3.14159;

    num = pi;

    std::cout << "Num = " << num << std::endl;
    std::cout << "Pi = " << pi << std::endl;

    return 0;
}