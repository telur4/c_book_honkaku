#include <stdio.h>

int
main(int argc, char *argv[])
{
    double double_array[2] = {0.1, 0.2};
    double *ptr;

    ptr = double_array;
    printf("*(ptr + 0) is %f\n", *(ptr + 0));
    printf("ptr[0] is %f\n", ptr[0]);
    printf("double_array[0] is %f\n", double_array[0]);
    printf("*(double_array + 0) is %f\n", *(double_array + 0));
    printf("0[double_array] is %f\n", 0[double_array]);

    // *ptr++ではポインタ変数変数の内容を直接書き換えてしまう
    // *ptrの値を変えることなく、配列のように扱いたい場合は、
    // *(ptr + n)のように扱えばいい
    printf("*(ptr + 1) is %f\n", *(ptr + 1));
    printf("ptr[1] is %f\n", ptr[1]);
    printf("double_array[1] is %f\n", double_array[1]);
    // 実は[]という記号は、単にアドレス計算をして関節参照しているだけ
    // 本来をアドレスを計算すべきところを、分かりやすいdouble_array[1]と書けることを
    // 「糖衣構文(シンタックスシュガー)」と呼ぶ
    printf("*(double_array + 1) is %f\n", *(double_array + 1));
    printf("1[double_array] is %f\n", 1[double_array]);

    return 0;
}
