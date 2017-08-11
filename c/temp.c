#include <stdio.h>

/* Print Fahrenheit-Celsius table */

#define LOWER   0
#define UPPER   300
#define STEP    15

int main() {

    float fahr, celsius;
    int lower, upper, step;
    int fahr_f;

    printf("Table of temperatures (while version)\n");
    printf("------------------------------\n");
    printf("F\tC\n");

    lower = 0; /* lower limit of temperature */
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0)  * (fahr - 32.0);
        printf("%3.0f %6.1f\n" , fahr, celsius);
        fahr = fahr + step;
    }

    printf("Table of temperatures (for version)\n");
    printf("------------------------------\n");
    printf("F\tC\n");

    for (fahr_f = LOWER; fahr_f <= UPPER; fahr_f += STEP) {
        printf("%3d %6.1f\n" , fahr_f, (5.0 / 9.) * (fahr_f - 32.0));
    }

}
