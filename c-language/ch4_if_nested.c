#include <stdio.h>

int main() {
    int score;

    printf("Please input your score: ");
    scanf("%d", &score);

    if (score >= 60) {
        /* outer gate: passed or not */
        if (score >= 90) {
            /* inner gate: within "passed", check excellent */
            printf("Excellent.\n");
        } else {
            printf("Pass.\n");
        }
    } else {
        printf("Fail.\n");
    }

    return 0;
}
