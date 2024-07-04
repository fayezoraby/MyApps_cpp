#include <iostream>
using namespace std;

int main()
{
    int num_of_kb = 0;
    cout << "Enter the number of kbs : ";
    cin >> num_of_kb;
    cout << "\nThe number of kbs is : " << num_of_kb << " kb \n\n";

    int num_of_bytes = num_of_kb * 1024;
    cout << "\nThe number of bytes is : " << num_of_bytes << " bytes\n";

    int num_of_bits = num_of_bytes * 8;
    cout << "\nThe number of bits is : " << num_of_bits << " bits\n\n";
    cin.get();
    cout << "Press enter to exit ...";
    
    cin.get();


    return 0;
}