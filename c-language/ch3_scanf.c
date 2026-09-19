/* ch3_scanf.c — C语言第3章 scanf 输入练习
 *
 * ⚠️ 本机没装编译器，用在线编译器跑。但必须选「支持键盘输入」的那个：
 *
 *   首选 OnlineGDB：https://www.onlinegdb.com/online_c_compiler
 *     - 整段代码粘到左边 → 点绿色 Run → 下方弹出 Interactive Console 控制台
 *     - 在控制台里敲 5 回车，程序就收到数了
 *
 *   备选 JDoodle：https://www.jdoodle.com/c-online-compiler
 *     - 左边粘代码，下方「STDIN Input」框里先写好要输入的数字 → 再点 Execute
 *
 *   ❌ 别用 runoob 的 try/runcode.php —— 它只把代码拿去跑、不给你打字的地方，
 *      scanf 读不到任何东西会直接跳过（表现为输出 a = 0）。这是平台限制，不是代码错。
 *
 * 输入顺序（程序会依次问三次）：
 *   1) 一个整数            例如 5
 *   2) 两个整数（空格隔开）  例如 3 7
 *   3) 两个整数（空格隔开）  例如 10 20
 */

#include <stdio.h>

int main() {
    int a, b;

    /* ---- 第1步：读一个整数 ----
     * scanf 双引号里写 "%d"（和 printf 一样的占位符）
     * 逗号后面写 &a  —— 这个 & 叫「取地址符」
     * 意思是「把用户敲的数字，存进 a 所在的那块内存」
     * 初学最容易漏掉 &，漏了程序会崩（后面错题本会讲）
     */
    printf("Please input a: ");
    scanf("%d", &a);
    printf("You input a = %d\n", a);

    /* ---- 第2步：一次读两个数（空格或回车隔开） ---- */
    printf("Please input two integers (split by space): ");
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);

    /* ---- 第3步：综合 —— 输入两数求和 ---- */
    printf("Input a and b to sum: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);

    return 0;
}

/*
 * 运行示例（你在输入区敲的内容用 > 标出）：
 *   Please input a: > 5
 *   You input a = 5
 *   Please input two integers (split by space): > 3 7
 *   a = 3, b = 7
 *   Input a and b to sum: > 10 20
 *   10 + 20 = 30
 *
 * 记住三条：
 *   1. scanf 读变量必须加 &（取地址），printf 输出变量不加 &
 *   2. 双引号里有几个 %d，就要给几个 &变量，按顺序对应
 *   3. 用户敲多个数时用空格或回车隔开，scanf 自动认
 */
