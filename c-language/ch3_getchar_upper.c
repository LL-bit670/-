// ch3_getchar_upper.c - Example 2: lowercase letter -> uppercase (review ASCII)
#include <stdio.h>

int main() {
    char c;
    printf("Please input a lowercase letter: ");
    c = getchar();          // read one char, e.g. 'a'
    c = c - 32;             // ASCII: 'a' is 97, 'A' is 65, the gap is 32
    printf("Uppercase is: ");
    putchar(c);             // prints 'A'
    putchar('\n');
    return 0;
}
