// ch3_getchar_echo.c - Example 1: read ONE character and echo it back
#include <stdio.h>

int main() {
    char c;
    printf("Please input a character: ");
    c = getchar();          // getchar() reads ONE character from the keyboard
    printf("You input: ");
    putchar(c);             // putchar() prints ONE character to the screen
    putchar('\n');          // print a newline so the next line starts fresh
    return 0;
}
