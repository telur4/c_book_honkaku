#include <stdio.h>

void
func(void)
{
    // この関数を実行した回数を記録する変数countを宣言して、初期値を0とする
    // static修飾子を付けた変数はプログラムが終了するまで値を永続的に保持する性質があるため、
    // このように関数の「状態」を保持することが可能になる
    static int count = 0;

    // 変数countの値を1増やす
    count++;

    // この関数を実行した回数を画面に表示する
    printf("count = %d\n", count);

    return;
}

int
main(int argc, char *argv[])
{
    func();
    func();
    func();

    return 0;
}
