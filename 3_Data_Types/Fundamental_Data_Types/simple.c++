#include <iostream>
using namespace std;

// Fundamental Data Types
int num = 42;
// short int: smaller range than int
// long int: longer
// long long int: super long

float pi = 3.14f;

double pi_high_precision = 3.1415926535;

char letter = 'A';

bool isEvent = true;

int main()
{
    std::cout << "Num = " << num << "\n"
              << "Float = " << pi << "\n"
              << "Double = " << pi_high_precision << "\n"
              << "Letter = " << letter << "\n"
              << "Bool = " << isEvent << "\n"
              << std::endl;
    return 0;
}