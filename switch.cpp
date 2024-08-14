#include <iostream>
#include <limits>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){
    int month;
    cout << "Enter the number of month (1-12) : ";
    cin >> month;

    switch (month){
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        default:
            cout << "Invalid input. Enter in a valid month number ( 1 - 12).\n";
            break;


    }

    return 0;
}