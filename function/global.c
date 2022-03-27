#include <stdio.h>

//スコープの話
int global = 0;

void func();

int main()
{
   global = 1;
   printf("%d\n", global);  

   func();
   printf("%d\n", global);    
}

void func(void) {
    global = 10;
}