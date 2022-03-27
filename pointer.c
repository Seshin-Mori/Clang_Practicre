#include <stdio.h>

int main()
{
    //int型の変数の値をポインタに格納してみる。
    int *p;
    int a = 10;
    //aのアドレスを格納
    p = &a;
    //アドレスの中身を更新
    *p = 20;

    printf("%d, %x\n", a, &a);
    printf("%d, %x\n", *p, p);
    return 0;
}
