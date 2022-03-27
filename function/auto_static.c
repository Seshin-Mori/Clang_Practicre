#include <stdio.h>

int autoFunc();
int staticFunc();

int main()
{
    int a = 10, b;

    b = autoFunc(a);
    printf("auto1:%d\n", b);
    b = autoFunc(a);
    printf("auto2:%d\n", b);

    b = staticFunc(a);
    printf("static1:%d\n", b);
    //一度目呼び出した時の計算結果の値を保持したまま
    b = staticFunc(a);
    printf("static2:%d\n", b);
}
//autoという修飾子は省略されている。
int autoFunc(int a){
    int x = 0;
    x = x + a;

    return x;
}

int staticFunc(int a){
    static int x = 0;
    x = x + a;

    return x;
}