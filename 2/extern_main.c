#include <stdio.h>

// extern指定市は、別のファイルに宣言してある変数や関数を利用したいときに、
// 「後でリンクkするときに、実態がありますよ」と指定するためにキーワード
extern int global_number;

int
main(int argc, char *argv[])
{
    printf("global_number = %d\n", global_number);

    return 0;
}
