#include <stdio.h>
/**
 * main = void
 * @i = integer
 * */
int main(void) {
    int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            int tens_i = i / 10;
            int units_i = i % 10;
            int tens_j = j / 10;
            int units_j = j % 10;

            putchar(tens_i + '0');
            putchar(units_i + '0');
            putchar(' ');
            putchar(tens_j + '0');
            putchar(units_j + '0');

            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
