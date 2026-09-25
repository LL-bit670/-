#include <stdio.h>

int main() {
    int score;

    printf("Please input your score (0-100): ");
    scanf("%d", &score);

    if (score >= 60 && score <= 100) {
        printf("Pass.\n");
    } else if (score >= 0 && score < 60) {
        printf("Fail.\n");
    } else {
        printf("Invalid score.\n");
    }

    return 0;
}
