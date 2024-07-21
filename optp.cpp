#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main()
{
    double sum = 20 + 5 * 4 / 2 - 2;

    cout << "5 * 4 = 20" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "        ^^" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "        20 / 2 = 10" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "                 ^^" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "            20 + 10 = 30" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "                      ^^" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << "                      30 - 2 = 28" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));

    return 0;
}
