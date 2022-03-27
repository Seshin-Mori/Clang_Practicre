#include <stdio.h>

int main()
{
    char a[10] =  "Hello";

    //配列の五文字は対応するアスキーコードが格納されていて、残りは0が格納される。サイズは10
    printf("%s\n", a);
    return 0;
}
