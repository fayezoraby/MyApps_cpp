#include <iostream>
#include <limits>

void ageCheck(){
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
        std::cout << "You can not enter this site!\nYour age is below 18.\n";
    }

}


int main(){
    char userInput;

    do {
        std::cout << "Let's start! (Y/n) : ";
        std::cin >> userInput;

        if (userInput == 'y' || userInput == 'Y') {
            ageCheck();
        } else if (userInput != 'n' && userInput != 'N')  {
            std::cout << "Enter a valid input 'y' or 'n'.\n";
        }
    } while ( userInput == 'y' || userInput == 'Y' );

    return 0;
}


/*
    char userInput;
    std::cout << "Let's start (y/n) : ";
    std::cin >> userInput;

    while (userInput == 'y') {
    age = ageCheck();
    }
*/