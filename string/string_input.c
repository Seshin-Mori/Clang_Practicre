#include <stdio.h>

int main()
{
    char str[10];
    int a = 10;
    //Hello Worldと打ってもスペースで途切れてします。
    //ホワイトスペースがない文字列に対応する関数がscanfである（こういうのは調べること）
    //scanf("%s", str);

    //改行以外を全て読み込む
    //でもこれだとバッファオーバーフローが発生してします。
    //scanf("%[^\n]", str);

    //これでオーバーフローを防ぐことができる→終端文字を含める
    scanf("%9[^\n]", str);

    printf("Your input string %s\n", str);
    printf("%d\n", a);

    return 0;
}