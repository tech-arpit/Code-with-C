#include <stdio.h>

int main() {
int n;
    scanf("%d",&n); // suppose input 1
   int shift ;
    shift=n<<3; // shift = 8
     shift = shift-n; // 8-1=7
         shift=shift>>1;
         printf("%d",shift);
      return 0;
}
