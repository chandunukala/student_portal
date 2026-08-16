#include <iostream>
#include <string>

struct StudentProfile
{
    std::string name;
    std::string email;
    int age;
};

void updateProfile(StudentProfile& student,
                   const std::string& newEmail,
                   int newAge)
{
    student.email = newEmail;
    student.age = newAge;
}

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

   

updateProfile(student, "updated@example.com", 23);

std::cout << "\nUpdated Profile:\n";
displayProfile(student);
    return 0;
}