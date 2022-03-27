#include <stdio.h>

int main () {
    int array[5] = {3,7,1,4,5};
    float average = 0.0;

    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        average += array[i];
    }
    
    average /= sizeof(array)/sizeof(int);
    printf("%f\n", average);
    return 0;
}