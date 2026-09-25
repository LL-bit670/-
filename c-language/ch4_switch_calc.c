#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Simple Calculator\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Please choose (1-4): ");
    scanf("%d", &choice);

    printf("Please input two integers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case 2:
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case 3:
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case 4:
            if (b != 0)
                printf("%d / %d = %.2f\n", a, b, (float)a / b);
            else
                printf("Cannot divide by zero.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
