#include <stdio.h>

int main () {
    struct X {
        char a;
        int b;
    };

    printf("%d\n", sizeof(struct X));

    return 0;
}