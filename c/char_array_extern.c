#include <stdio.h>
#define MAXLINE 1000 /* maximum inpyt line size */

// TODO move functions' prototypes to header files and
// functions' definitions to their own source file.

// using external variables, not a good idea but using just for example
int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

/* print longest input line */
int main() {
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getline()) > 0) {
        printf("len for this line is %d\n", len);
        if (len > max) {
            max = len;
            printf("max so far is %d\n", max);
            copy();
        }
    }

    if (max > 0) {
        printf("The longest line was: %s", longest);
    }

    return 0;
}

int getline(void) {
    int c, i;
    extern char line[];

    for (i = 0; i < (MAXLINE - 1) && (c=getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(void) {
    int i;
    extern char line[], longest[];

    i = 0;
    printf("Copying\n");
    while ((longest[i] = line[i]) != '\0') {
        ++i;
    }
}
