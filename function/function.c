#include <stdio.h>

int square();

int main()
{
   int a, b;
   a = 10;

   b = square(a);
    printf("%d\n", b);
   return 0; 
}

//下に書いても未定義になりますよ
//だからプロトタイプ宣言をします
//まだ定義していないけど、後から定義しますよという意味
int square(int a){
    int b;
    b = a * a;

    return b; 
}