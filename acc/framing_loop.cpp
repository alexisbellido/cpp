#include <iostream>
#include <string>

int main()
{

    std::cout << "Enter your first name: ";
    std::string name;
    std::cin >> name;

    const std::string greeting = "Hello, " + name + "!";

    const int pad = 1;
    const int rows = pad * 2 + 3;

    std::cout << std::endl;
    int r = 0;

    while (r != rows) {
        std::cout << "LINE" << std::endl;
        r++;
    }

    //const std::string spaces(greeting.size(), ' ');
    //const std::string second = "* " + spaces + " *";
    //const std::string first(second.size(), '*');

    //std::cout << first << std::endl;
    //std::cout << second << std::endl;
    //std::cout << "* " << greeting << " *" << std::endl;
    //std::cout << second << std::endl;
    //std::cout << first << std::endl;

    return 0;
}
