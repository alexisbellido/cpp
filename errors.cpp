// testing try/catch
#include <iostream>

class Bad_area {};

int main()
{
    std::cout << "Hello there" << std::endl;
    try {
        int x= 1;
        throw Bad_area {};
        std::cout << x << '\n';
    }
    catch (Bad_area) {
        std::cout << "Error\n";
    }
    return 0;
}
