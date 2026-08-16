#include <iostream>
#include <string>

struct StudentProfile
{
    std::string name;
    std::string email;
    int age;
};
bool isValidProfile(const StudentProfile& student)
{
    return !student.name.empty() &&
           !student.email.empty() &&
           student.age > 0;
}
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


void displayProfileSummary(const StudentProfile& student)
{
<<<<<<< HEAD
    std::cout << "Student Personal Profile" <<'\n';
     std::cout << "Student: " << student.name << '\n';
=======
   std:: cout << "Student Academic Profile" << '\n';
    std::cout << "Student: " << student.name << '\n';
>>>>>>> conflict-profile
    std::cout << "Contact: " << student.email << '\n';
    std::cout << "Age: " << student.age << '\n';
}

void updateEmail(StudentProfile& student, const std::string& newEmail)
{
    if (!newEmail.empty())
    {
        student.email = newEmail;
    }
}

int main(){
    StudentProfile student{
        "Student",
        "student@example.com",
        22
    };

   if (isValidProfile(student)){
    std::cout << "\nProfile is valid.\n";
    }
  else {
    std::cout << "\nProfile contains invalid data.\n";
 }


 displayProfileSummary(student);

updateProfile(student, "updated@example.com", 23);

std::cout << "\nUpdated Profile:\n";
displayProfile(student);

updateEmail(student, "contact@studentportal.com");

std::cout << "\nUpdated Contact:\n";
displayProfileSummary(student);

    return 0;
}