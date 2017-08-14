#include <stdio.h>
#define MAXLINE 1000 /* maximum inpyt line size */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        printf("len for this line is %d\n", len);
        if (len > max) {
            max = len;
            printf("max so far is %d\n", max);
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("The longest line was: %s", longest);
    }

    return 0;
}

/* read a line into s, return length */

int getline(char s[], int lim) {
    int c, i;
    for (i = 0; i < (lim - 1) && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    printf("Copying\n");
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
