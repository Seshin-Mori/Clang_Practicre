#include <stdio.h>

#define APRIL 4
#define sq(x) x*x

int GROBAL_VALUE;

int method();

int main() {
    int x,y,z;
    
    x = 10;
    y = 20;
    z = x + y;

    /* loop */
    for (int i = 0; i < 10; i++) {
        printf("Hello world %d\n", i);
    }

    // add method
    z = method(z);

    return 0;
}

int method(int a) {
    a = a + 1;
    return a;
}
