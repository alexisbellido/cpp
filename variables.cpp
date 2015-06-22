#include "std_lib_facilities.h"

// testing with variables
//
int main()
{
    string first_name = "Mono";
    string last_name = "Chango";
    int age = 5;
    bool married = true;
    double flying_time = 3.5;
    char decimal_point = '.';

    if (married) {
        cout << "The guy is married\n";
        //count << "Flying time is " << flying_time << "\n";
        //count << "Decimal point character is " << decimal_point << "\n";
    }

    cout << "Hello, " << first_name << ", you are " << age << " years old!\n";

    string full_name = first_name + ' ' + last_name;
    cout << "full name: " << full_name << "\n";
}
