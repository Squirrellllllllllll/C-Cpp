#include <iostream>
#include <string>

using namespace std;
// Classes (class)
class People
{
public:
    std::string name;
    int age;

    void printInfo()
    {
        std::cout << "Name: " << name << "\n"
                  << "Age: " << age << endl;
    };
};

std::ostream &operator<<(std::ostream &os, const People &people)
{
    os << "Name: " << people.name << "\n"
       << "Age: " << people.age << std::endl;
    return os;
}

People p2;

int main()
{
    p2.name = "An Dang";
    p2.age = 23;

    std::cout << "\n"
              << "People is: "
              << "\n"
              << p2 << std::endl;
    return 0;
};