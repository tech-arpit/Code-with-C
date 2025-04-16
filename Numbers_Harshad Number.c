#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    int sum =0;
    
    scanf("%lld",&n);
   int x = n;
    
    while(n)
    {
    short rem = n%10;
       n = n/10;
        sum = rem+sum;
  }
    // printf("%d",sum);
   if(x%sum==0){
       printf("%d is a harshad number",x);
   }
    else
    {
        printf("%d is not a harshad number",x);
    }
    
  
    return 0;
}
