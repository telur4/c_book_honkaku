#include <stdio.h>

int
main(int argc, char *argv[])
{
    double double_array[3];
    int int_array[3];
    char char_array[3];

    // double型の配列は8バイトごとに新しい領域が確保されている
    printf("address of double_array[0] is %p\n", &double_array[0]);
    printf("address of double_array[1] is %p\n", &double_array[1]);
    printf("address of double_array[2] is %p\n", &double_array[2]);

    // int型の配列は4バイトごと
    printf("address of int_array[0] is %p\n", &int_array[0]);
    printf("address of int_array[1] is %p\n", &int_array[1]);
    printf("address of int_array[2] is %p\n", &int_array[2]);

    // char型の配列は1バイトごと
    printf("address of char_array[0] is %p\n", &char_array[0]);
    printf("address of char_array[1] is %p\n", &char_array[1]);
    printf("address of char_array[2] is %p\n", &char_array[2]);

    return 0;
}
