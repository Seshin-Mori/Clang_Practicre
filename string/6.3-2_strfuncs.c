#include <stdio.h>
/* sprintf */
#include <string.h>
/* strcpy, scrncpy, strlen
   strcmp, strncmp, strcat, strncat */
#include <stdlib.h>
/* atoi, atol, atof, strtol */

int main(){
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[3];
    int i;
    long l;
    double d;

    int s = strlen(str1);
    int c = strcmp(str2, str1);
    //strlen→文字列の長さ
    //sizeof→配列のサイズを求める
    //strcpyを使用しないようにしましょう。
    strncpy(str3, str1, sizeof(str3));

    //終端に空文字を入れてくれないので、終端に代入
    str3[2] = '\0';
    memset(str3, 0x00, sizeof(str3));
    strcat(str3, str1);
    strcat(str3, str2);

    //str3[0] = '\n'
    
    printf("%d\n", s);
    printf("%s\n", str3);

    return 0;

}