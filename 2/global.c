#include <stdio.h>

// 大域(グローバル)変数global_numberを宣言
// 簡単に複数の関数で値をやり取りできるが、度の関数からでも値を書き換えることができるため、
// 乱用するとプログラムの見通しが悪くなり、バグの原因にもなる
// 利用はプログラム全体で共有する必要がある設定情報など必要最低限にとどめる
// 関数の値渡しを利用すべき
int global_number;

void
func_1(void)
{
    printf("from func_1: %d\n", global_number);

    return;
}

void
func_2(void)
{
    printf("from func_2: %d\n", global_number);

    return;
}

void
func_3(void)
{
    printf("from func_3: %d\n", global_number);

    return;
}

int main(int argc, char *argv[])
{
    global_number = 1;

    func_1();

    global_number = 10;

    func_2();

    global_number = 100;

    func_3();

    return 0;
}
