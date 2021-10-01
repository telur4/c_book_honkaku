#include <stdio.h>

int
main(int argc, char *argv[])
{
    int number_2;
    int *pnumber_2;

    // 変数number_2に1という値を代入
    number_2 = 1;

    // ポインタ変数pnumber_2に変数number_2のアドレスを代入
    pnumber_2 = &number_2;

    // pnumber_2と指定した場合は、number_2のアドレスとなる
    printf("address of number_2 is %p\n", pnumber_2);

    // *pnumber_2と指定した場合は、pnumber_2が指し示す先のアドレスに格納されている値1になる
    // このようにポインタを利用して、そのポインタに格納されたアドレスが指し示す先の値を利用することを「関節参照」と言う
    // このとき利用して*という記号は「関節参照演算子」と呼ばれる
    printf("number_2 is %d\n", *pnumber_2);

    return 0;
}
