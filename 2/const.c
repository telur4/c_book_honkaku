#include <stdio.h>

int
main(int argc, char *argv[])
{
    // 初期化した値から一切変更できなくなる指定子(定数)
    // 定数を変更しようとするプログラムをコンパイルしようとするとエラーが出る
    // データ型に関して、あまり警告やエラーを発さないCコンパイラがエラーを出してくれるということは重要で、
    // この機能を使うことで明示的に「変更してはいけない変数」を作ることができる
    const char character = 'A';
    const int number = 1;

    printf("character is = %c\n", character);
    printf("number is = %d\n", number);

    return 0;
}
