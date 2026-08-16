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

void setDarkMode(StudentSettings& settings, bool enabled)
{
    settings.darkModeEnabled = enabled;
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

void setLanguage(StudentSettings& settings, const std::string& language)
{
    if (!language.empty())
    {
        settings.language = language;
    }
}

void displaySettingsSummary(const StudentSettings& settings)
{
    std::cout << "\n--- Settings Summary ---\n";

    std::cout << "Notifications: "
              << (settings.notificationsEnabled ? "Enabled" : "Disabled")
              << '\n';

    std::cout << "Dark Mode: "
              << (settings.darkModeEnabled ? "Enabled" : "Disabled")
              << '\n';

    std::cout << "Language: "
              << settings.language << '\n';
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

setDarkMode(settings, true);

std::cout << "\nAfter dark mode preference change:\n";
displaySettings(settings);


setLanguage(settings, "English");

std::cout << "\nAfter language preference change:\n";
displaySettings(settings);

displaySettingsSummary(settings);

    return 0;
}