#include <iostream>
#include <string>


void displayLoginStatus(bool loggedIn)
{
    if (loggedIn)
        std::cout << "Login status: ACTIVE\n";
    else
        std::cout << "Login status: INACTIVE\n";
}

bool authenticateUser(const std::string& username,
                      const std::string& password)
{
    const std::string validUsername = "student";
    const std::string validPassword = "portal123";

    return username == validUsername && password == validPassword;
}

void logoutUser()
{
    std::cout << "User logged out successfully.\n";
}

int main()
{
    std::string username;
    std::string password;

    const int maxAttempts = 3;
    int failedAttempts = 0;
    bool loggedIn = false;

    while (failedAttempts < maxAttempts && !loggedIn)
    {
        std::cout << "Username: ";
        std::cin >> username;

        std::cout << "Password: ";
        std::cin >> password;

        if (authenticateUser(username, password))
        {
            loggedIn = true;
            std::cout << "Login successful.\n";
            break;
        }

        failedAttempts++;

        std::cout << "Invalid username or password.\n";

        if (failedAttempts < maxAttempts)
        {
            std::cout << "Attempts remaining: "
                      << maxAttempts - failedAttempts << "\n";
        }
    }

    if (!loggedIn)
    {
        std::cout << "Too many failed attempts. Login blocked.\n";
        return 0;
    }

    std::cout << "Student portal session is active.\n";

    logoutUser();

    return 0;
}