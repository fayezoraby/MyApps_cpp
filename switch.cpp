#include <iostream>
#include <limits>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void monthCheck(int month){
switch (month){
        case 1:
            cout << "The 1st month of the year is January" << endl;
            break;
        case 2:
            cout << "The 2nd month of the year is February" << endl;
            break;
        case 3:
            cout << "The 3rd month of the year is March" << endl;
            break;
        case 4:
            cout << "The 4th month of the year is April" << endl;
            break;
        case 5:
            cout << "The 5th month of the year is May" << endl;
            break;
        case 6:
            cout << "The 6th month of the year is June" << endl;
            break;
        case 7:
            cout << "The 7th month of the year is July" << endl;
            break;
        case 8:
            cout << "The 8th month of the year is August" << endl;
            break;
        case 9:
            cout << "The 9th month of the year is September" << endl;
            break;
        case 10:
            cout << "The 10th month of the year is October" << endl;
            break;
        case 11:
            cout << "The 11th month of the year is November" << endl;
            break;
        case 12:
            cout << "The 12th month of the year is December" << endl;
            break;
        default:
            cout << "Invalid input. Enter in a valid month number ( 1 - 12).\n";
            break;


    }
}

int main(){
    int month;
    while (true){
        cout << "Enter the number of month (1-12) : ";
        if (cin >> month && month >= 1 && month <= 12 ) {
            break;
        } else {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please inter a valid month number (1-12).\n";
        }
    }

    cout << "\n";
    monthCheck(month);
    cout << "\n";
    return 0;
}