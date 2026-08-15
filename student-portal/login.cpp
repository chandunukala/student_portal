#include <iostream>
#include <string>

bool authenticateUser(const std::string& username,
                      const std::string& password)
{
    const std::string validUsername = "student";
    const std::string validPassword = "portal123";

    return username == validUsername && password == validPassword;
}

int main()
{
    std::string username;
    std::string password;

    const int maxAttempts = 3;
    int failedAttempts = 0;

    while (failedAttempts < maxAttempts)
    {
        std::cout << "Username: ";
        std::cin >> username;

        std::cout << "Password: ";
        std::cin >> password;

        if (authenticateUser(username, password))
        {
            std::cout << "Login successful.\n";
            return 0;
        }

        failedAttempts++;

        std::cout << "Invalid username or password.\n";

        if (failedAttempts < maxAttempts)
        {
            std::cout << "Attempts remaining: "
                      << maxAttempts - failedAttempts << "\n";
        }
    }

    std::cout << "Too many failed attempts. Login blocked.\n";

    return 0;
}