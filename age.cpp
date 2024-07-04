#include <iostream>
#include <limits>
using namespace std;


int main()
{
    cout << endl;
    cout << "============================\n";
    cout << "== Calculate Your Age App ==\n";
    cout << "============================\n" << endl;
    
    int age;
    cout << "Enter your age : ";
    cin >> age;
    cin.get(); // it will consume the new line char left by the previous cin
    cout << endl << "the age you entered is \a: " << age;
    cout << endl << endl;

    int age_in_days = age * 365;
    cout << "Your age in days is : " << age_in_days << " Days" << endl;

    int age_in_hours = age_in_days * 24;
    cout << "Your age in hours is : " << age_in_hours << " Hours" << endl;

    int age_in_minutes = age_in_hours * 60;
    cout << "Your age in minutes is : " << age_in_minutes << " Minutes" << endl;

    int age_in_seconds = age_in_minutes * 60;
    cout << "Your age in seconds is : " << age_in_seconds << " Seconds" << endl;

    cout << "\n\nPress Enter to Exit ...";
    
    cin.get(); // wait for the user input to exit 
    return 0;
}
