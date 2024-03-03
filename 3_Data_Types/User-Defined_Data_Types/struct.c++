#include <iostream>
#include <string>

using namespace std;

// Structures (struct)
// siz struct = sum of element's size
// Có thể truy xuất tất cả các ptu cùng 1 lúc
struct Person
{
    std::string name;
    int age;
    float height;
};

std::ostream &operator<<(std::ostream &os, const Person &person)
{
    os << "Name: " << person.name << "\n"
       << "Age: " << person.age << "\n"
       << "Height: " << person.height;
    return os;
};

Person p1 = {"Thomas", 23, 1.77};

int main()
{
    std::cout << "Person is:"
              << "\n"
              << p1 << std::endl;
    return 0;
}