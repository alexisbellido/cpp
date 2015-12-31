#include "std_lib_facilities.h"

int main()
{
    int number_of_words = 0;
    string previous = " ";
    string current;
    string letter = "A";

    while (cin >> current) {
        ++number_of_words;
        cout << "Letter: " + letter;
        cout << "======\n";
        if (previous == current) {
            cout << "Repeated word: " + current + '\n';
        }
        previous = current;
    }

}
