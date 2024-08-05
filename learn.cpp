#include <iostream>
#include <string>

using namespace std;

void welcome() {
    cout << "Welcome to CodeQuest: Galactic Adventures!\n";
    cout << "You're on a mission to save the galaxy from an evil AI.\n";
    cout << "Let's start with learning some basics of C++.\n\n";
}

void learnLoops() {
    cout << "=== Learning Loops ===\n";
    cout << "Loops allow you to repeat a block of code multiple times.\n";
    cout << "For example, let's use a loop to move your robot forward 10 steps.\n";
    cout << "Try to write a loop that prints 'Move Forward' 10 times.\n";
    cout << "Enter your code below (without main function):\n";

    // Prompt user to write the code for the loop
    string loopCode;
    getline(cin, loopCode); // To consume the previous newline character
    getline(cin, loopCode);

    cout << "\nHere is what you wrote:\n";
    cout << loopCode << "\n";
    cout << "Let's see if it works...\n\n";

    // Simulate running the loop (this is a placeholder, actual execution not done)
    for (int steps = 0; steps < 10; ++steps) {
        cout << "Move Forward" << endl;
    }
    cout << "You've reached the exit!\n\n";
}

void learnOOP() {
    cout << "=== Learning Object-Oriented Programming (OOP) ===\n";
    cout << "OOP allows you to create classes and objects in C++.\n";
    cout << "Let's create a Robot class with health and power attributes.\n";
    cout << "Try to write a simple Robot class with an attack method.\n";
    cout << "Enter your code below (without main function):\n";

    // Prompt user to write the code for the Robot class
    string classCode;
    getline(cin, classCode); // To consume the previous newline character
    getline(cin, classCode);

    cout << "\nHere is what you wrote:\n";
    cout << classCode << "\n";
    cout << "Let's see if it works...\n\n";

    // Simulate running the class (this is a placeholder, actual execution not done)
    class Robot {
    public:
        int health;
        int power;

        Robot(int h, int p) : health(h), power(p) {}

        void attack() {
            cout << "Attacking with power: " << power << endl;
        }

        void defend() {
            cout << "Defending with health: " << health << endl;
        }
    };

    Robot myRobot(100, 20);
    myRobot.attack();
    myRobot.defend();
    cout << "Robot created and used!\n\n";
}

void nextLevel() {
    cout << "Congratulations! You've completed the beginner level of CodeQuest: Galactic Adventures.\n";
    cout << "Keep practicing and explore more advanced levels to become a C++ master.\n";
    cout << "Good luck on your coding journey!\n";
}

int main() {
    welcome();
    learnLoops();
    learnOOP();
    nextLevel();
    return 0;
}
