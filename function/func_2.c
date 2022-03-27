#include <stdio.h>
//最大値を返すメソッド
int max();

int main()
{
   int a, b, m;
   a = 10;
   b = 12;

   m = max(a, b);
   printf("%d\n", m);
   return 0; 
}
//↓戻り値の型。定義されていない戻り値を書いてもエラーになる。
int max(int x, int y){
    if (x > y)
    {
        return x;//→ここに10を足したとしても、aの値には影響しない。（違うメモリで実行しているため）
        //ポインタを使うことでa自体の値を変えることができたりする→詳しくはポインタ編で。
    } else {
        return y;
    }
    
} 

