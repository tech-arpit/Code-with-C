#include <stdio.h>

int main() {
long long int n,check=1;
    scanf("%lld",&n);
   for(int i=1; i<=n; i++){
      check *= i;
       if(check == n){
           printf("%d",i);
           return 0;
       }
       else if(check>n){
           printf("NO");
           return 0;
       }
   }
    return 0;
}
