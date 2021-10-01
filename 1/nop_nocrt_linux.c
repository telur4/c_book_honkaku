// スタートアップルーチンを自作する
int
main(int argc, char *argv[])
{
    return 0;
}

// スタートアップルーチンの関数名は_startと決まっている
// _start関数の処理内容はmain関数を呼び出して、OSに終了したということを通知する
// このOSへの終了通知は、Cランタイムやlibcを使用しない場合はアセンブリ言語でないと記述できない
// つまり、Cランタイムやlibcを使用しないと、機種ごとに違うプログラムになってしまう
void
_start(int args)
{
    main(0, 0);

    // linuxの場合の終了通知
    asm("movl $0,%ebx\n"
        "movl $1,%eax\n"
        "int $0x80");
}
