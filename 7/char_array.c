#include <stdio.h>

int
main(int argc, char *argv[])
{
    char one_string[] = "hello, world\n";

    // 配列そのものを指定した時と配列の最初の要素のアドレスを指定すると値は同じになる
    // つまり、文字列を扱う関数は、その文字列の最初の要素のアドレスを受け取っていたということになる
    printf(" one_string   : %p\n", one_string);
    printf("&one_string[0]: %p\n", &one_string[0]);
    printf("&one_string[1]: %p\n", &one_string[1]);
    printf("&one_string[2]: %p\n", &one_string[2]);
    printf("&one_string[3]: %p\n", &one_string[3]);

    return 0;
}
