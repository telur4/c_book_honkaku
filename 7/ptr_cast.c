#include <stdio.h>
#include <limits.h>
#include <float.h>

int
main(int argc, char *argv[])
{
    // メモリ領域を超えなくするためのカウンタ
    int i;
    // 1バイトずつメモリを読み取るためのポインタ
    unsigned char *ptr;

    int num_1 = INT_MAX;
    long long num_2 = LLONG_MAX;
    double num_3 = DBL_MAX;

    printf("num_1 = %d\n", num_1);
    ptr = (unsigned char *) &num_1;
    for(i = 0; i < (int) sizeof(num_1); i++) {
        printf("0x%X ", *ptr);
        ptr++;
        // 上記2行は、printf("0x%X ", ptr[i]);でも良い
    }
    printf("\n");

    printf("num_2 = %lld\n", num_2);
    ptr = (unsigned char *) &num_2;
    for(i = 0; i < (int) sizeof(num_2); i++) {
        printf("0x%X ", *ptr);
        ptr++;
    }
    printf("\n");

    printf("num_3 = %f\n", num_3);
    ptr = (unsigned char *) &num_3;
    for(i = 0; i < (int) sizeof(num_3); i++) {
        printf("0x%X ", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
