#include <stdio.h>

int main() {
    int base,height;
    int area;

    //小数点以下
    float base2;
    base2 = 3.1;

    base = 3;
    height = 4;

    area = base * height / 2;

    printf("triangle area %d\n", area);

    return 0;
}