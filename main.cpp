#include <iostream>
#include <limits>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::numeric_limits;

class Person {
public:
    string name;
    int age;
    int height;
    double weight;

    Person(string n, int h, double w) : name(n), height(h), weight(w), age(0){}

    void calculateAge(int currentYear, int birthYear){
        age = currentYear - birthYear;
    }
    void greetAndCalculateAge(int currentYear){
        int birthYear;

        cout << "Hello " << name << "!" << endl;
        cout << "Which year were you born? : "; 
        while (!(cin >> birthYear) || birthYear > currentYear || birthYear < 1900) {
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input. Enter a valid year of birth : ";
        }
        calculateAge(currentYear, birthYear);
        cout << "You are " << age << " years old." << endl;

    }
};

int main() {
    
    int currentYear = 2024;

    Person fayez("Fayez", 169, 84.5);
    Person ethar("Ethar", 154, 63.5);

    cout << endl;

    fayez.greetAndCalculateAge(currentYear);

    cout << endl;

    ethar.greetAndCalculateAge(currentYear);

    if ( fayez.age > ethar.age) {
        cout << fayez.name << " is older than " << ethar.name << " by " << fayez.age - ethar.age << " years" << endl;
    } else if (fayez.age < ethar.age) {
        cout << ethar.name << " is older than " << fayez.name << " by " << ethar.age - ethar.age << " years" << endl;
    } else if (fayez.age == ethar.age) {
        cout << "Both " << fayez.name << " and " << ethar.name << " are " << fayez.age << " years old!";
    } else {
        cout << "Something went wrong, try again!" << endl;
    }
    cout << endl;
}


