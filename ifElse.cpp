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
        std::cout << "\nWelcome to the site!\n";
    } else {
        std::cout << "\nYou can not enter this site!\nYour age is below 18.\n";
    }

}

int main(){
    ageCheck();
    return 0;
}