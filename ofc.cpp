#include <iostream>
#include <thread>
#include <chrono>
using namespace std;


int main()
{
    int sum = 20 + 5 * 4 / 2 - 2;
    
    cout << "5*4/2 = 10" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "         ^" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "20 +    10 - 2 = 28" << endl; 
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "\nThe final sum is : " << sum;
    std::this_thread::sleep_for(std::chrono::seconds(3));



    // if (sum == 28 && sum > 5)
    // {
        

    // }


    return 0;
}




// int main()
// {
//     int age;
//     cout << "How old are you ? \n";
//     cin >> age;
//     cout << endl;
//     if (age < 18)
//     {
//         cout << "you are not old enough!\n";
//     }
//     else if (age >= 18)
//     {
//         cout << "You are fit for this !\n";
//     }
//     else
//     {
//         cout << "Enter a valid age! \n";

//     }


//     return 0;
// }



// int main()
// {
//     cout << (10 == 10) << "\n";     //true => 1
//     cout << (10 > 10) << "\n";      //false => 0
//     cout << (10 < 10) << "\n";      //false => 0
//     cout << (10 >= 10) << "\n";     //true 10 = 10 => 1
//     cout << (10 <= 10) << "\n";     //true => 1
//     cout << (10 != 10) << "\n";     //false => 0
    
//     return 0;

// }