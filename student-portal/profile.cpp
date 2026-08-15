#include <iostream>
#include <string>

struct StudentProfile
{
    std::string name;
    std::string email;
    int age;
};

void displayProfile(const StudentProfile& student)
{
    std::cout << "Name: " << student.name << '\n';
    std::cout << "Email: " << student.email << '\n';
    std::cout << "Age: " << student.age << '\n';
}

int main()
{
    StudentProfile student{
        "Student",
        "student@example.com",
        22
    };

    displayProfile(student);

    return 0;
}