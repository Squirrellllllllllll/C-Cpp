#include <iostream>

using namespace std;
// Unions (union):
// Store different data types in the same memory location

// Size của union phụ thuộc vào thành phần có size lớn nhất
// Trong cùng 1 thời gian chỉ có thể truy cập vào 1 thành phần
union Data
{
    int num;
    char letter;
    float decimal;
};

Data myData;

std::ostream &operator<<(std::ostream &os, const Data &data)
{
    os << "Num: " << data.num << "\n"
       << "Letter: " << data.letter << "\n"
       << "Decimal: " << data.decimal << "\n"
       << std::endl;
    return os;
}

int main()
{
    myData.num = 42;
    myData.letter = 'a';
    myData.decimal = 1.09;

    std::cout
        << "My Data: "
        << "\n"
        << myData << std::endl;
    return 0;
}