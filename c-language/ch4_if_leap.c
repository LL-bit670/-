#include <stdio.h>

int main() {
    int year;

    printf("Please input a year: ");
    scanf("%d", &year);

    /* Leap year rule:
       divisible by 400, OR (divisible by 4 AND NOT divisible by 100) */
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}
