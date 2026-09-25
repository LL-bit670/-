#include <stdio.h>

int main() {
    int age;

    printf("Please input your age: ");
    scanf("%d", &age);

    /* if: 只有条件成立时，才执行后面 {} 里的语句 */
    if (age >= 18) {
        printf("You are an adult.\n");
    }

    return 0;
}
