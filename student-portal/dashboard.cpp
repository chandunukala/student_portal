#include <iostream>
#include <string>

struct Dashboard
{
    std::string studentName;
    int courses;
    int completedCourses;
    double attendancePercentage;
};

double calculateCompletionPercentage(const Dashboard& dashboard)
{
    if (dashboard.courses == 0)
        return 0.0;

    return (static_cast<double>(dashboard.completedCourses)
            / dashboard.courses) * 100.0;
}

void displayDashboard(const Dashboard& dashboard)
{
    std::cout << "\n--- Student Dashboard ---\n";
    std::cout << "Student: " << dashboard.studentName << '\n';
    std::cout << "Total Courses: " << dashboard.courses << '\n';
    std::cout << "Completed Courses: "
              << dashboard.completedCourses << '\n';
}

void displayAttendance(const Dashboard& dashboard)
{
    std::cout << "Attendance: "
              << dashboard.attendancePercentage
              << "%\n";
}

int main()
{
    Dashboard dashboard{
    "Student",
    5,
    3,
    87.5
    };

    displayDashboard(dashboard);

    double progress = calculateCompletionPercentage(dashboard);

    std::cout << "Course Completion: "
          << progress << "%\n";

    displayAttendance(dashboard);

    return 0;
}