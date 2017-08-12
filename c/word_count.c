#include <stdio.h>

#define IN      1       /* inside a word */
#define OUT     0       /* outside a word */


/* Count lines, words, and characters in input */
/* For OSX you need to press Return and then CTRL+D in an empty line to signal EOF */

int main() {

    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("lines: %d, words: %d, characters: %d\n", nl, nw, nc);

}
