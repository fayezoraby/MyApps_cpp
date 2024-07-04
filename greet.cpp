#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    cout << setprecision(13);

    float f1 = 10.1234567891;
    cout << f1 << "\n";

    double dob = 10.1234567891;
    cout << dob << "\n";

    auto num = 10;
    cout << "num : " << num;
    cout << endl;
    cout << &num;
    cout << endl;
    int nums = 10;
    cout << "nums : " << nums;
    cout << endl;
    cout << &nums;

    return 0;
}