#include <stdio.h>

int
main(int argc, char *argv[])
{
    double double_array[2] = {0.1, 0.2};
    double *ptr;

    // ポインタ変数ptrに、配列double_array[]の先頭要素のアドレスを代入
    ptr = double_array;
    printf("*ptr is %f\n", *ptr);
    printf("double_array[0] is %f\n", double_array[0]);

    ptr++;
    printf("*ptr is %f\n", *ptr);
    printf("double_array[1] is %f\n", double_array[1]);

    return 0;
}
