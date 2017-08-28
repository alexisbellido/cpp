#include <stdio.h>
#include <ctype.h>

int atoi(char s[]);

int atoi(char s[]) {
    int i, n;

    printf("s is %s\n", s);
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = 10 * n + (s[i] - '0');
        printf("char: %c, number for char: %d, relative number substracting '0': %d\n", s[i], s[i], s[i] - '0');
    }

    return n;
}

int main() {
    const char msg[] = "warning";
    char letter = 'y';
    char digits[] = "526";

    printf("Yay, this is a %s\n", msg);
    printf("atoi('%s'): %d\n", digits, atoi(digits));

    printf("toupper('%c') = %c\n", letter, toupper(letter));

    return 0;

}
