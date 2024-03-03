#include <iostream>
using namespace std;

int numbers[5] = {1, 2, 3, 4, 5};
int n = sizeof(numbers) / sizeof(numbers[0]);

int main()
{
    std::cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}