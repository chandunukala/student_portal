#include <iostream>
#include <string>

struct StudentSettings
{
    bool notificationsEnabled;
    bool darkModeEnabled;
    std::string language;
};

void setNotifications(StudentSettings& settings, bool enabled)
{
    settings.notificationsEnabled = enabled;
}

void displaySettings(const StudentSettings& settings)
{
    std::cout << "\n--- Student Settings ---\n";
    std::cout << "Notifications: "
              << (settings.notificationsEnabled ? "Enabled" : "Disabled")
              << '\n';

    std::cout << "Dark Mode: "
              << (settings.darkModeEnabled ? "Enabled" : "Disabled")
              << '\n';

    std::cout << "Language: " << settings.language << '\n';
}

int main()
{
    StudentSettings settings{
        true,
        false,
        "English"
    };

    displaySettings(settings);

    setNotifications(settings, false);

std::cout << "\nAfter notification preference change:\n";
displaySettings(settings);

    return 0;
}