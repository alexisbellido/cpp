// read and write first name
#include "std_lib_facilities.h"

int main()
{
    cout << "Enter first name followed by 'enter':\n";
    string first_name;
    cin >> first_name;

    // with one line
    cout << "Hello, " << first_name << "!\n";

    // or using many lines
    cout << "Hi,";
    cout << first_name;
    cout << " :)\n";

    string color;
    int number = 0;
    cout << "Enter color followed by number followed by 'enter':\n";
    cin >> color >> number;
    cout << "Color: " << color << ", number: " << number << "!\n";
}
