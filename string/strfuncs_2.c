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
    char str3[20], str4[256];
    int i;
    long l;
    double d;
    char str5[] = "101";

    int s = strlen(str1);
    int c = strcmp(str2, str1);
    //str3[0] = '\0';
    memset(str3, 0x00, sizeof(str3));
    strcat(str3, str1);
    strcat(str3, str2);

    sprintf(str4, "%s, 123, %s, %d", str3, str1, s);
    printf("%s\n", str4);

    l = strtol(str5, NULL, 2);

    //強制キャスト系
    i = atoi("123");
    printf("%d\n", i);
    //printf("%d\n", l);

    return 0;

}