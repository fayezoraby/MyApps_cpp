#include <iostream>
#include <limits>
using std::cout;
using std::cin;
using std::string;
using std::endl;



class Person{
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
    cout << endl;
    cout << "What year were you born? : ";
    while (!(cin >> birthYear) || birthYear > currentYear || birthYear < 1900) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid input. Enter a valid year (number, not in future, not before 1900) : ";
    }
    calculateAge(currentYear, birthYear);
    }

};


int main(){
    int currentYear = 2024;

    Person fayez("Fayez", 169, 84.5);
    Person ethar("Ethar", 154, 63.5);

    cout << endl;

    fayez.greetAndCalculateAge(currentYear);

    cout << endl;

    ethar.greetAndCalculateAge(currentYear);

    cout << endl;

    if (fayez.age > ethar.age) {
        cout << fayez.name ;
    } else if (ethar.age > fayez.age) {
        cout << ethar.name;
    } else if (fayez.age = ethar.age) {
        cout << "same age : " << fayez.age;
    } else {
        cout << "Something is wrong!";
    }
}