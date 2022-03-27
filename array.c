#include <stdio.h>

void func();

int main()
{
    int a[10];

    //int a[] = {0,0,0,0,0,0,0,0,0,0};

    //intの中身を初期化する
    //sizeof(a)→40バイト割る、sizeof(int)4
    //配列をオーバーして読み書きするのはダメですよ
    for (int i = 0; i < sizeof(a)/sizeof(int); i++)
    {
        a[i] = 0;
    }

    func(a);

    //配列を関数の引数にする場合は、ポインタ渡しになる。
    printf("%d\n", a[0]);

    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", a[j]);
    }    

    return 0;       
}

void func(int a[]) {
    a[0] = 10;
}