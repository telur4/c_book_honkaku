#include <stdio.h>

int
main(int argc, char *argv[])
{
    char one_string[] = "hello, world\n";

    // C言語の文字列は単なる配列で、最後に'\0'があることだけが条件
    // なので、先頭として渡されるアドレスが変わると、結果として出力される文字列も変わる
    // ただ、毎回文字列を指定するのに配列の最初の要素のアドレスを指定するのは手間なので、
    // 配列自体を指定すれば最初の要素のアドレスだと扱われるようになっている
    // これは文字列以外の配列においても同じで、配列名とだけ書くのと、&配列名[0]と各場合はまったく同じアドレスになる
    printf(" one_string   : %s\n", one_string);
    printf("&one_string[0]: %s\n", &one_string[0]);
    printf("&one_string[1]: %s\n", &one_string[1]);
    printf("&one_string[2]: %s\n", &one_string[2]);
    printf("&one_string[3]: %s\n", &one_string[3]);

    return 0;
}
