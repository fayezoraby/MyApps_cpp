#include <iostream>
using namespace std;

int main()
{
    int num_1 = 100;
    int num_2 = 100.20;
    int num_3 = true;
    float sum = 1.5f + 2.0f;
    // int num_4 = "Fayez"; // Problem - char assigned to int.

    cout << num_2 << "\n";
    cout << num_3 << "\n";
    cout << num_1 << "\n";
    cout << INT_MAX << endl;
    cout << INT_MIN << endl;
    cout << "\"sum\" = " << sum << endl;
    cout << "the size of \"sum\" is: " << sizeof(sum) << endl;
    cout << "the size of \"int\" is: " << sizeof(int) << endl;
    cout << "the size of \"double\" is: " << sizeof(double) << endl;
    cout << "the size of \"char\" is: " << sizeof(char) << endl;
    cout << "the size of \"float\" is: " << sizeof(float) << endl;
    cout << "the size of \"bool\" is: " << sizeof(bool) << endl;
    
    // cout << num_4 << "\n\n";


    cin.get();
    cout << "Press enter to exit ...";
    
    cin.get();


    return 0;
}