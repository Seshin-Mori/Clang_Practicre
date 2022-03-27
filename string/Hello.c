#include <stdio.h>
#include <string.h>

int main()
{
    char str[256];

    scanf("%s", str);
    //Helloと等しければ
    if (strcmp(str, "Hello") == 0)
    {
        printf("Hello Teacher\n");
    } else if (strcmp(str, "こんにちは") == 0) {
        printf("こんにちは 先生\n");
    }
    
    return 0;
}
