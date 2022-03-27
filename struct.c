#include <stdio.h>
#include <string.h>

int func();

//typedefで名前を変更できますよ
typedef struct Human
{
    //構造体のメンバ
    //クラスみたいなこと？
    int age;
    char name[10];
}Human_a;

int main()
{
    //struct Human man;
    //Human_a man;
    //構造体を配列にすることもできる
    Human_a man[3];

    man[0].age = 20;
    //文字列を変数にコピーすることはできない？
    strcpy(man[0].name, "Mori");
    printf("name is %s\nage is %d\n", man[0].name, man[0].age);

    //func(man);
    //Mori,20になる。
    //構造体を関数に渡す場合、通常ポインタ渡しになる※後述
    //printf("name is %s\nage is %d", man.name, man.age);

    man[1].age = 10;
    strcpy(man[1].name, "Mimizu");
    printf("name is %s\nage is %d\n", man[1].name, man[1].age);

    return 0;
}

int func(struct Human man)
{
    man.age = 30;
    strcpy(man.name, "Mari");
}
