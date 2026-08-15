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

    std::cout << "Username: ";
    std::cin >> username;

    std::cout << "Password: ";
    std::cin >> password;

    if (authenticateUser(username, password))
        std::cout << "Login successful.\n";
    else
        std::cout << "Invalid username or password.\n";

    return 0;
}