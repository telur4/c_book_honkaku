// 32ビットCPUのコンピュータでは、一般的にint型は4バイト(32ビット)なので、次の図のようになる。
// 図では、number_arrayという配列が0x00001040～0x0000105Cというアドレスにあるとしている。
//              31  ～  0
// 0xFFFFFFFF   |       |   32ビットで使える最大値(4GB)
//              |   メ  |
// 0x00001060   |   モ  |   おそらく他の変数やプログラムで使われている
// 0x0000105C   |   リ  |   プログラムからはnumber_array[7]としてアクセス可能
// 0x00001058   |   空  |   プログラムからはnumber_array[6]としてアクセス可能
// 0x00001054   |   間  |   プログラムからはnumber_array[5]としてアクセス可能
// 0x00001050   |       |   プログラムからはnumber_array[4]としてアクセス可能
// 0x0000104C   |   ３  |   プログラムからはnumber_array[3]としてアクセス可能
// 0x00001048   |   ２  |   プログラムからはnumber_array[2]としてアクセス可能
// 0x00001044   |   Ｇ  |   プログラムからはnumber_array[1]としてアクセス可能
// 0x00001040   |   Ｂ  |   プログラムからはnumber_array[0]としてアクセス可能
// 0x0000103C   |       |   おそらく他の変数やプログラムで使われている
//              |       |
// 0x00000000   |       |
#include <stdio.h>

int
main(int argc, char *argv[])
{
    // -1は番兵
    int number_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1};

    int i, answer;

    for(i = 0, answer = 0; number_array[i] != -1; i++) {
        answer += number_array[i];
    }

    printf("answer = %d\n", answer);

    return 0;
}
