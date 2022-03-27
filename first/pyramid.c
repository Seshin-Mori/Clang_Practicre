#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        //jの有効範囲はforの中だけなので、同じ変数を使うことができる。
        //通常はkなど、違う変数を使うようにすること。
        for (int j = 3; j > i; j--)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i*2-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}