#include <stdio.h>

int main()
{
    char h, b, c, d, e;
    h = 0x48;
    b = 'B';
    c = 'C';
    d = 'D';
    e = 'E';
    //こんなことはやってられないので文字列を使う
    printf("%c%c%c%c%c\n", h, b, c, d, e);
    //16進数のアスキーコード
    printf("%x%x%x%x%x\n", h, b, c, d, e);
    return 0;
}
