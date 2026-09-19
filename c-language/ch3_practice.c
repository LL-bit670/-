/* ch3_practice.c — C语言第3章 综合练习（printf + scanf 三合一）
 *
 * 运行方式：本机没装编译器，用 OnlineGDB
 *   https://www.onlinegdb.com/online_c_compiler
 *   全选删掉左边代码 → 把本文件整段粘进去 → 点 Run
 *   下方控制台依次敲输入（每次敲完回车）：
 *       3        （练习1：半径）
 *       7 2      （练习2：两个整数，空格隔开）
 *       456      （练习3：三位数）
 *
 * 注意：所有 printf 输出标注一律用 ASCII 英文（避免 Windows 控制台乱码）
 */

#include <stdio.h>

int main() {

    /* ============ 练习 1｜输入半径，算圆周长和圆面积 ============ */
    float r, c, area;                      /* 小数用 float，不用 int */

    printf("=== Task 1: circle ===\n");
    printf("Please input radius: ");
    scanf("%f", &r);                       /* 读 float 用 %f，不是 %d */
    c    = 2 * 3.14159f * r;               /* 周长 = 2πr */
    area = 3.14159f * r * r;               /* 面积 = πr² */
    printf("Circumference = %.2f\n", c);   /* %.2f = 只保留两位小数 */
    printf("Area = %.2f\n", area);
    /* 输入 3 → Circumference = 18.85，Area = 28.27
       （用的是 3.14159，不是 3.14，所以周长是 18.85 不是 18.84） */


    /* ============ 练习 2｜输入两个整数，输出四则运算 ============ */
    int a, b;

    printf("\n=== Task 2: arithmetic ===\n");
    printf("Please input two integers (split by space): ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %.2f\n", a, b, (float)a / b);

    /* ★ 本练习最大的坑：为什么写 (float)a / b 而不是 a / b
       a 和 b 都是 int → a / b 是「整数除法」：7 / 2 = 3，小数部分被直接砍掉（见错题 1）
       先把 a 强转成 float，7.0 / 2 才会得到 3.50
       动手验证：把 (float) 删掉，再跑一次，输出会变成 3.00
       —— 这一行改动，就把错题 1 的道理变成了你亲眼见过的现象 */


    /* ============ 练习 3｜拆出三位数的百位 / 十位 / 个位 ============ */
    int n;

    printf("\n=== Task 3: split digits ===\n");
    printf("Please input a 3-digit number: ");
    scanf("%d", &n);
    printf("hundreds = %d\n", n / 100);       /* /100 砍掉后两位 */
    printf("tens     = %d\n", n / 10 % 10);   /* 先 /10 砍个位，再 %10 夹末位（错题 7） */
    printf("units    = %d\n", n % 10);        /* %10 夹末位 */
    /* 输入 456 → 4 / 5 / 6 */


    /* ============ 加练｜把三个数字加起来 ============ */
    /* 在上面练习 3 的基础上，再加一行，输出各位数字之和。
       输入 456 → 应该输出 digit sum = 15
       提示：再声明一个 int sum，把三个表达式加起来。
       自己写，写不出来再问我，不要直接问我答案。 */

    return 0;
}
