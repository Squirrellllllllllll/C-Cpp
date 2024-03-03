// A Lambda function is an anonymous function that is defined in place, within source code & concise syntax

// Syntax
// [capture - list](parameters) -> return_type {
//     function body
// };

// capture - list : A list of variables from the surrounding scope that the lambda function can access.
// parameters: The list of input parameters, just like in a regular function. Optional.
// return_type: The type of the value that the lambda function will return. This part is optional, and the compiler can deduce it in many cases.
// function body: The code that defines the operation of the lambda function.

#include <iostream>
using namespace std;

int main()
{
    // Lambda function with no capture, parameters, return type
    auto printHello = []()
    {
        std::cout << "Hello world!" << std::endl;
    };

    printHello();

    // Lambda function with parameter
    auto add = [](int a, int b)
    {
        return a + b;
    };

    int result = add(5, 6);
    std::cout << "result = " << result << std::endl;

    // Lambda function with capture-by-value
    int multiplier = 3;
    auto times = [multiplier](int a)
    {
        return a * multiplier;
    };
    int result2 = times(7);
    std::cout << "Result2 = " << result2 << std::endl;

    // Lambda function with capture-by-reference
    int expiresInDays = 45;
    auto updateDate = [&expiresInDays](int newDays)
    {
        expiresInDays = newDays;
    };
    updateDate(30);
    std::cout << "expiresInDays after updated is: " << expiresInDays << std::endl;
    // Note that: When variables inside lambda using capture-by-reference will affect its value in the surrounding scope

    return 0;
}
