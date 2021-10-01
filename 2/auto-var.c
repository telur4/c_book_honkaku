#include <stdio.h>

// 引数を受け取らず、文字列を呼び出し元の関数に渡す関数funcの宣言
char *
func(void)
{
    // hello, worldという文字列で初期化されたone_stringという配列
    // 変数をそのまま宣言すると、基本的にはスタック領域(ローカル)に確保されるため、main関数から参照すると意図しない値になる
    // 静的変数はスタックとは別で、共有可能な場所に値を確保するので、どの関数からでもアクセスできる
    static char one_string[14] = "hello, world\n";

    // one_stringの内容を表示
    printf("from func: %s", one_string);

    // 配列one_stringの先頭アドレスを呼び出し元に渡す
    return one_string;
}

// メイン関数
int
main(int argc, char *argv[])
{
    // 関数funcを実行して、そこから渡された文字列を表示する
    printf("from main: %s", func());

    return 0;
}
