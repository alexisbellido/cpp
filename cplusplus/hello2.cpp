// use declaration for std namespace
#include <iostream>

// always include the string header and don't rely on it being included by iostream
#include <string>

#include <cstdio>
// or can also use <stdio.h>
// see http://stackoverflow.com/questions/10460250/cstdio-stdio-h-namespace

using namespace std;

int main() {
    string name = "Mono";
    cout << "Hello there, I'm  using namespace std\n";
    cout << '\n';
    int age = 43;
    printf("I'm %s and my age is %d\n", name.c_str(), age);
    return 0;
}
