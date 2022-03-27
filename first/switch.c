#include <stdio.h>

int main()
{
    int a, b;
    a = -1;
    b = 0;
    switch (a)
    {
    case 1:
    b = 1;    
    break;
    case 2:
    b = 2;
    break;
    default:
    b = 3;
        break;
    }
    return 0;
}