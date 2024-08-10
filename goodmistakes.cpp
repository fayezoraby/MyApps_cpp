/*Here is some codes which are not functioning as needed but still
can be used to learn something.

to try a code, uncomment and compile it.
*/

//1st code >>> returns lines count equal to the length of the string
// #include <iostream>
// #include <limits>

// void ageCheck(){
//     int age;
//     std::cout << "Enter your age : ";

//     while (!(std::cin >> age) || age > 120 || age < 5) {
//         std::cin.clear();
//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//         std::cout << "Enter a valid age (whole number, 5 to 120) : ";
//     }
//     if (age >= 18) {
//         std::cout << "Welcome to the site!\n";
//     } else {
//         std::cout << "You can not enter this site!\nYour age is below 18.\n";
//     }

// }


// int main(){
//     char userInput;
//     int count = 0;

//     do {
//         count = 0;

//         std::cout << "Let's start! (Y/n) : ";
//         std::cin >> userInput;

//         if (userInput == 'y' || userInput == 'Y') {
//             ageCheck();
//         } else if (userInput != 'n' && userInput != 'N')  {
//             std::cout << count++ << "Enter a valid input 'y' or 'n'.\n";
//         }
//     } while ( true );


//     return 0;
// }