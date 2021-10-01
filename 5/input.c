#include <stdio.h>

int
main(int argc, char *argv[])
{
    char one_string[16];

    // 入力を促すプロンプトを表示
    printf("input>");

    // one_string[]に文字列を入力
    fgets(one_string, 16, stdin);

    // 入力した文字列を表示
    printf("Your input is %s", one_string);

    return 0;
}
