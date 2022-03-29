#include <stdio.h>

//定数名
#define MAX 10
#define NAME "MORI"

// define関数
#define PRINT(d) printf("%d\n", d);
//三項演算子
#define ISPOS(a) ((a) > 0 ? 1 : 0)
    //三項演算子は以下と同じ意味になる
    // int a = 10;
    // if (a > 0)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }
int main()
{
    int a = 10;
    for (int i = 0; i < MAX; i++)
    {
        PRINT(i);
    }

    if (ISPOS(a))
    {
        printf("positive\n");
    }
    

    return 0;
}
