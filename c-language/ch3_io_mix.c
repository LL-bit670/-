#include <stdio.h>

int main() {
    int age;
    char first;

    /* ---- scanf + printf : deal with a NUMBER ---- */
    printf("Please input your age: ");
    scanf("%d", &age);
    printf("Your age is: %d\n", age);

    /* IMPORTANT: after scanf reads the number, the ENTER key ('\n')
       you pressed is still sitting in the input buffer.
       This line eats that leftover newline, so the next getchar()
       reads the character YOU type, not the old enter key.
       (The while-loop is taught in Ch.4; for now treat it as a
        fixed recipe whenever you mix scanf with getchar.) */
    while (getchar() != '\n');

    /* ---- getchar + putchar : deal with a single CHARACTER ---- */
    printf("Please input the first letter of your name: ");
    first = getchar();

    printf("You typed: ");
    putchar(first);
    putchar('\n');

    printf("Uppercase is: ");
    putchar(first - 32);   /* lowercase - 32 = uppercase (ASCII) */
    putchar('\n');

    return 0;
}
