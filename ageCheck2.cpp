#include <iostream>
#include <limits>

// Function to handle age checking
void ageCheck() {
    int age;
    std::cout << "Enter your age : ";

    while (!(std::cin >> age) || age > 120 || age < 5) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Enter a valid age (whole number, 5 to 120) : ";
    }
    if (age >= 18) {
        std::cout << "Welcome to the site!\n";
    } else {
        std::cout << "You cannot enter this site! Your age is below 18.\n";
    }
}

// Function to handle three attempts for valid input
bool threeAttempts() {
    int attempts = 0;
    char userInput;

    while (attempts < 3) {
        std::cout << "Let's start! (Y/n) : ";
        std::cin >> userInput;

        // Check if the input is invalid
        if (std::cin.fail() || (userInput != 'y' && userInput != 'Y' && userInput
        != 'n' && userInput != 'N')) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter a valid input 'y' or 'n'.\n";
            attempts++;
        } else {
            // Return true if valid input, else false
            return (userInput == 'y' || userInput == 'Y');
        }
    }

    // If the loop exits after 3 invalid attempts
    std::cout << "Too many invalid attempts. Exiting...\n";
    return false;
}

int main() {
    // Call threeAttempts to get user input
    if (threeAttempts()) {
        ageCheck();
    }

    return 0;
}
