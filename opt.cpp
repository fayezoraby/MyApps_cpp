#include <iostream>
using namespace std;

int ageCheck() {
    int age;

    cout << "Enter your age : "; cin >> age; cout << endl;

    age >= 18 ? cout << "Your age is : "<< age << ", your are allowed!" << endl << endl : cout << "your are not allowed because your age is: " << age << endl << endl;

    return 0;
}

int evenOrOdd() {
    int num;

    cout << "Enter a number to test if even or odd : "; cin >> num;

    num % 2 == 0 ? cout << num << " is an even number !" : cout << num << " is an odd number !";

    cout << "\n\n";

    return 0;
}


int main()
{

while (true)
{
    cout << "Let's start : (y/n) : ";
    char userinput; cin >> userinput;
    if (userinput == 'y')
    {
    ageCheck();
    cout << "\n";
    evenOrOdd();
    }
    else;
    {
        break;
    }
}
return 0;
}


