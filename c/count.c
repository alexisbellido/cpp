#include <stdio.h>

/* Count lines in input */

int main() {

    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
            printf("one line\n");
            printf("%d\n", nl);
        }
    }

}
