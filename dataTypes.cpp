#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    auto age = 0;

    cout << "What is your name: ";
    getline(cin, name);
    
    cout << endl;
    
    cout << "How old are you ?\n";
    
    cin >> age;
    
    cout << "\nHello, " << name << "!\n";
    cout << "You are " << age << " years old";
    return 0;
}