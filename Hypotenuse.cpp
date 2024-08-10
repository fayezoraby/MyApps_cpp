#include <iostream>
#include <cmath>

// A hypotenuse of a triangle is the longest side of the triangle
// In a right-angled triangle, asuming sides are a, b and c.
// c is the hypotenuse.
// c^2 = a^2 + b^2.
// c = square root of ( a^2 + b^2 )

int main(){
    double a;
    double b;
    double c;

    
    std::cout << std::endl;
    
    std::cout << "Enter the length of A: ";
    std::cin >> a;

    std::cout << std::endl;

    std::cout << "Enter the length of B: ";
    std::cin >> b;

    std::cout << std::endl;

    c = sqrt(pow(a, 2) + pow(b, 2));


    std::cout << "The Hypotenuse (c) is : " << round(c * 100) / 100 << " cm";
    
    std::cout << std::endl << std::endl;

}