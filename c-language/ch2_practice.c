/* =====================================================================
 *  ch2_practice.c  --  C Language Chapter 2 hands-on practice
 *  Textbook: Tan Haoqiang, "C Programming" 5th ed., Chapter 2
 *  Data storage and arithmetic
 *
 *  How to run:
 *    gcc ch2_practice.c -o ch2 && ./ch2
 *  or just open it in Dev-C++ / Visual Studio and press Run.
 *
 *  NOTE: output labels are kept in ASCII on purpose, so that the
 *  console never shows garbled characters on Windows (GBK vs UTF-8).
 * ===================================================================== */

#include <stdio.h>

int main(void)
{
    /* ---------- 1. How many bytes does each type take? ---------- */
    printf("=== 1. sizeof ===\n");
    printf("char        : %d byte(s)\n", (int)sizeof(char));
    printf("short       : %d byte(s)\n", (int)sizeof(short));
    printf("int         : %d byte(s)\n", (int)sizeof(int));
    printf("long        : %d byte(s)\n", (int)sizeof(long));
    printf("long long   : %d byte(s)\n", (int)sizeof(long long));
    printf("float       : %d byte(s)\n", (int)sizeof(float));
    printf("double      : %d byte(s)\n", (int)sizeof(double));

    int a = 100;
    printf("sizeof(a)   : %d byte(s)\n", (int)sizeof(a));

    /* ---------- 2. Integer literals: decimal / octal / hex ---------- */
    printf("\n=== 2. Number bases ===\n");
    int d = 10;
    int o = 010;     /* leading 0  -> octal  -> 8  */
    int h = 0x10;    /* leading 0x -> hex    -> 16 */
    printf("10 = %d\n", d);
    printf("010 = %d  (octal!)\n", o);
    printf("0x10 = %d  (hex!)\n", h);

    /* ---------- 3. Integer overflow: it wraps around ---------- */
    printf("\n=== 3. Overflow ===\n");
    int max_int = 2147483647;
    printf("before: %d\n", max_int);
    max_int = max_int + 1;
    printf("after +1: %d   <-- wrapped around, no error!\n", max_int);

    short max_short = 32767;
    printf("short before: %d\n", max_short);
    max_short = max_short + 1;
    printf("short after +1: %d\n", max_short);

    /* ---------- 4. Character is really a small integer ---------- */
    printf("\n=== 4. char and ASCII ===\n");
    char c = 'A';
    printf("c = %c, its code = %d\n", c, c);
    c = c + 1;
    printf("after +1: %c\n", c);

    char lower = 'a';
    printf("'a' = %d\n", lower);
    printf("'a' - 32 = %c\n", lower - 32);

    printf("the code of '0' is %d, NOT zero\n", '0');

    /* ---------- 5. Integer division and the % operator ---------- */
    printf("\n=== 5. / and %% ===\n");
    printf("7 / 2     = %d\n", 7 / 2);
    printf("7 %% 2     = %d\n", 7 % 2);
    printf("7.0 / 2   = %f\n", 7.0 / 2);
    printf("(float)7/2= %f\n", (float)7 / 2);
    printf("(float)(7/2) = %f   <-- braces matter!\n", (float)(7 / 2));
    printf("-7 %% 2    = %d\n", -7 % 2);

    /* ---------- 6. Floating point is NOT exact ---------- */
    printf("\n=== 6. Float precision ===\n");
    float x = 0.1f;
    float y = 0.2f;
    printf("0.1f + 0.2f = %.10f\n", x + y);
    if (x + y == 0.3f)
        printf("equal\n");
    else
        printf("NOT equal  <-- never compare floats with ==\n");

    /* ---------- 7. ++i vs i++ ---------- */
    printf("\n=== 7. ++i vs i++ ===\n");
    int i = 5;
    int m = i++;    /* use first, then increase */
    printf("i=%d, m=i++ -> m=%d\n", i, m);

    int j = 5;
    int n = ++j;    /* increase first, then use */
    printf("j=%d, n=++j -> n=%d\n", j, n);

    /* ---------- 8. Your turn: take a 3-digit number apart ---------- */
    printf("\n=== 8. Split a 3-digit number ===\n");
    int num = 0;
    printf("input an integer (100-999): ");
    if (scanf("%d", &num) == 1) {
        printf("hundreds: %d\n", num / 100);
        printf("tens    : %d\n", num / 10 % 10);
        printf("ones    : %d\n", num % 10);
    }

    return 0;
}
