#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string userInput;
    cout << "Enter a char or number: ";
    cin >> userInput;
    cout << endl;


    if (isdigit(userInput[0]))
    {
        int num = std::stoi(userInput);
        
        cout << "The letter assigned to your number in ASCII table is : " << char(num);

    }
    else
    {
        cout << "The number assigned to your letter in ASCII table is : " << int(userInput[0]);
    }


    return 0;
}