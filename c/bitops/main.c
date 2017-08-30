#include <stdio.h>
#include "helpers.h"
#include "getbits.h"

// Compile with
// $ gcc -Wall -std=c99 -pedantic main.c helpers.c getbits.c -o main
// See how include guards are used in header files

// TODO play with shift operators, see if adding another include

int main(void) {

    unsigned x = 0;
    int y = 2; // int is signed by default

    int num = 7;

    int shift = 2;

    short int signed_short = 0;
    unsigned short int unsigned_short = 0;

    char s_char = 0;
    unsigned char u_char = 0;

    int p = 2;
    int n = 1;

    printf("~u_char: %hu \n", ~u_char);

    printf("%d and ~%d using %%d: %d \n", 0, 0, ~0);
    printf("%u and ~%u using %%u: %u \n", 0, 0, ~0);

    printf("Unsigned ~0: %u \n", ~0U);
    printf("Unsigned ~1: %u \n", ~1U);
    printf("Unsigned ~3: %u \n", ~3U);

    printf("%hd and ~%hd using %%hd: %hd \n", signed_short, signed_short, ~signed_short);
    printf("%hu and ~%hu using %%hu: %hu \n", unsigned_short, unsigned_short, ~unsigned_short);

    printf("%d << %d = %d \n", num, shift, num << shift);
    printf("%d >> %d = %d \n", num, shift, num >> shift);

    printf("x (%u) is unsigned so ~x is: %u \n", x, unsigned_unary(x));
    printf("y (%d) is int (signed by default) so ~y is: %d \n", y, signed_unary(y));

    printf("getbits(%d, %d, %d): %d\n", x, p, n, getbits(x, p, n));
    printf("bitcount(%d) (just duplicating for now): %d\n", x, bitcount(x));
    return 0;

}
