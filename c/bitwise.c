#include <stdio.h>

int main() {
    int x = 7; // 111
    int mask = 1;  // 001

    printf("Bitwise ops\n");

    printf("~x: %d\n", ~x);
    printf("x & mask: %d\n", x & mask); // 001
    printf("x | mask: %d\n", x | mask); // 111

    printf("%d\n", 0177);

    return 0;
}
