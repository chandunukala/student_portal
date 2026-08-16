#include <iostream>
#include <string>

struct Dashboard
{
    std::string studentName;
    int courses;
    int completedCourses;
    double attendancePercentage;
    double averageGrade;
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

void displayAcademicPerformance(const Dashboard& dashboard)
{
    std::cout << "Average Grade: "
              << dashboard.averageGrade
              << "%\n";
}

void displayDashboardSummary(const Dashboard& dashboard)
{
    double progress = calculateCompletionPercentage(dashboard);

    std::cout << "\n--- Dashboard Summary ---\n";
    std::cout << "Student: " << dashboard.studentName << '\n';
    std::cout << "Course Progress: " << progress << "%\n";
    std::cout << "Attendance: "
              << dashboard.attendancePercentage << "%\n";
    std::cout << "Average Grade: "
              << dashboard.averageGrade << "%\n";
}

int main()
{
    Dashboard dashboard{
    "Student",
    5,
    3,
    87.5,
    82.4
};

    displayDashboard(dashboard);

    double progress = calculateCompletionPercentage(dashboard);

    std::cout << "Course Completion: "
          << progress << "%\n";

    displayAttendance(dashboard);

    displayAcademicPerformance(dashboard);

    displayDashboardSummary(dashboard);

    return 0;
}