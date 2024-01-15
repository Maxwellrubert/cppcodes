#include <iostream>
#include <string>

int main() {
    // Prompt the user for their name
    std::cout << "What's your name? ";
    
    // Read the user's name
    std::string userName;
    std::getline(std::cin, userName);

    // Check if the user entered a name
    if (!userName.empty()) {
        // Display a personalized greeting
        std::cout << "Hello, " << userName << "! Welcome to the simple C++ program." << std::endl;
    } else {
        // Display a generic greeting if no name is entered
        std::cout << "Hello there! Welcome to the simple C++ program." << std::endl;
    }

    return 0;
}
