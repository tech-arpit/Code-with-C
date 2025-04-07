#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    int sum = 0;
   
    while(n%2==0){
         
        sum = sum +2;
        n = n/2;
    }
    for( int i =3; i*i<=n ; i=i+2){
        while(n%i==0){
            sum = sum +i;
            n = n/i;
        }
        
    }
    if(n>1){
        sum =sum+n; 
    }
    printf("%d\n",sum);
    return 0;
}
