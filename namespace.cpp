#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using integer_t = int;

int currentYear = 2024;
int year; 

namespace fayez{
string name = "Fayez";
    integer_t age;
    integer_t height = 169;
    double weight = 85.5;
}

namespace ethar{
string name = "Ethar";
    int height = 159;
    int age;
    double weight = 63.5;
}

int main(){

cout <<endl;

cout << "Hello " <<  ethar::name << "!" << endl;
cout << "What year were you born? : ";
cin >> year;
ethar::age = currentYear - year;
cout << "You are " << ethar::age << " years old." << endl;

cout <<endl;

cout << "Hello " <<  fayez::name << "!" <<endl;
cout << "What year were you born? : ";
cin >> year;
fayez::age = currentYear - year;
cout << "You are " << fayez::age << " years old." << endl;

if (fayez::age > ethar::age){
    cout << fayez::name << " is older than " << ethar::name << " by " << fayez::age - ethar::age << " years." << endl;
}
else if (ethar::age > fayez::age){
    cout << ethar::name << " is older than " << fayez::name << " by " << ethar::age - fayez::age << " years." << endl;
}
else {
    cout << fayez::name << " and " << ethar::name << " are of the same age: " << fayez::age << endl;
}
cout <<endl;
    
    return 0;
}