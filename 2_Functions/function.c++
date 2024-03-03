// General format of function

// return_type function_name(parameter List) {
//     Function body
// }

// Example
#include <iostream>
using namespace std;

// function prototype
int addTwoNumber(int a, int b);

int main()
{
    int num1 = 1, num2 = 2;
    int result = addTwoNumber(num1, num2);
    cout << "The sum is: " << result << endl;
    return 0;
}

// function add 2 numbers and return sum
int addTwoNumber(int a, int b)
{
    int sum = a + b;
    return sum;
}