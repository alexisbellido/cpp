#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>

// TODO move to my own header file
int my_strlen(char s[]);

int my_strlen(char s[]) {
    int i;

    i = 0;
    while (s[i] != '\0') {
        ++i;
    }

    return i;
}

int main() {

    int my_oct = 023;
    int my_hex = 0x1a;
    int my_dec = 15;
    enum boolean {NO, YES};
    enum months {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

    printf("Test: %d, %s\n", 5, "cat");
    printf("FLT_MAX: %f\n", FLT_MAX);
    printf("FLT_MIN: %f\n", FLT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("INT_MIN: %d\n", INT_MIN);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("CHAR_MIN: %d\n", CHAR_MIN);

    printf("my_oct: %d\n", my_oct);
    printf("my_hex: %d\n", my_hex);
    printf("my_dec: %d\n", my_dec);
    
    printf("character constant \\0 is the null character, the character with value zero which numeric value is %d\n", '\0');

    printf(
        "hello, "
        "I will use "
        "many lines to split and concatenate a long string"
        "\n"
    );

    printf("Using strlen from standard library, length of %s is %ld\n", "mono", strlen("mono"));

    printf("Using my_strlen, length of %s is %d\n", "mono", my_strlen("mono"));

    printf("YES is %d\n", YES);
    printf("Value of month FEB is %d\n", FEB);

    return 0;

}
