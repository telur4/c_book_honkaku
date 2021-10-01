// 初期化しない場合のごみデータ
// C言語で値をまだ大州していない変数、初期化をしていない変数に格納されている値は「不定」となる
#include <stdio.h>

//スタックの流れ
// 1. スタートアップルーチンが実行される
// 2. main関数を呼び出すためにスタートアップルーチンの戻り値アドレスをスタックに積む
int
main(int argc, char *argv[])
{
    // 3. main関数内で、スタックポインタを操作して変数のためのメモリを確保する
    char character;
    register int number;

	// 4. printf関数の呼び出しを行う時、main関数への戻り値アドレスを確保する
    printf("character is = %c\n", character);
    printf("number is = %d\n", number);

    return 0;
}
