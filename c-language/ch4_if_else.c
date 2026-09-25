#include <stdio.h>

int main() {
    int age;

    printf("Please input your age: ");
    scanf("%d", &age);

    /* if ... else : two roads, one must be taken */
    if (age >= 18) {
        printf("You are an adult.\n");     /* true road  */
    } else {
        printf("You are a minor.\n");      /* false road */
    }

    printf("Program still goes on here.\n");
    return 0;
}
