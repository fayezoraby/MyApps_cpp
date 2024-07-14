#include <iostream>
using namespace std;

int stoi()
{
    cout << endl << endl << "==================================" << endl;
    cout << "====Welcome to ASCII Converter====" << endl;
    cout << "==================================" << endl << endl << endl;
    cout << "To convert Char to Number enter .. 1 ." << endl;
    cout << "To convert Number to char enter .. 2 ." << endl << endl;
    cout << "What is your choice? ...  " ;
    int user_input = 1;

    cin >> user_input;

    if (user_input == 1)
    {
        char char_1;
        cout << endl << "\nYour choice is to convert char to num!" << endl << endl;

        cout << "Please enter the char you want the ASCII value for: " ;
        cin >> char_1;
        cout << "The ASCII value of the char your entered is : ===  " << int(char_1) << "  ===" << endl << endl;
        
    }
    else if (user_input == 2)
    {
        int num;
        cout << "\nYour choice is to convert num to char!" << endl << endl;
        cout << "Please enter the num you want the ASCII value for: ";
        cin >> num;
        cout << "The ASCII value of the char your entered is : ===  " << char(num) << "  ===" << endl << endl;
        
    }
    else
    {
        cout << "Are you kidding !!, get out!!!\nClick enter and go ....." << endl;

    }
    
    cout << "Do you want to try again? (yes/no): ";
    string input;
    cin >> input;

    return (input == "yes" || input == "Yes" || input == "Y" || input == "y");
}

int main() {

    bool repeat = true;
    while (repeat){

    repeat = stoi();
    
    }

    cout << "Exiting ....";

    return 0;
}