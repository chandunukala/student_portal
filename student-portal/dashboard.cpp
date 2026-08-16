#include <iostream>
#include <string>

struct Dashboard
{
    std::string studentName;
    int courses;
    int completedCourses;
};

void displayDashboard(const Dashboard& dashboard)
{
    std::cout << "\n--- Student Dashboard ---\n";
    std::cout << "Student: " << dashboard.studentName << '\n';
    std::cout << "Total Courses: " << dashboard.courses << '\n';
    std::cout << "Completed Courses: "
              << dashboard.completedCourses << '\n';
}

int main()
{
    Dashboard dashboard{
        "Student",
        5,
        3
    };

    displayDashboard(dashboard);

    return 0;
}