// printfの『f』はformattedを表し、様々な書式で出力できることを表す
// main関数がOSに返す値は0が正常終了、それ以外が異常終了という意味を表す
#include <stdio.h>

/*
 * メイン関数
 * プログラムのはじまり
 */
int
main(int argc, char *argv[])
{
    printf("Hello world!\n");    /* 文字列を表示する */
    return 0;                    // OSに数値の0を渡す
}
