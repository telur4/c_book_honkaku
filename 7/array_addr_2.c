#include <stdio.h>

int
main(int argc, char *argv[])
{
    int number_array[4] = {1000, 2000, 3000, 4000};
    int *pnumber;

    // ポインタ変数pnumberに、配列number_array[]の先頭要素のアドレスを代入
    pnumber = number_array;

    printf("*pnumber is %d\n", *pnumber);

    // ポインタ変数pnumberに、配列number_array[1]のアドレスを代入
    pnumber = &number_array[1];

    printf("*pnumber is %d\n", *pnumber);

    return 0;
}
