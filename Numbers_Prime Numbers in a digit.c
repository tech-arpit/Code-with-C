#include <stdio.h>

int main() {
long long int n;
    scanf("%lld",&n);
    if(n<0){
        n =n*(-1);
    }
    int count = 0;
    while(n>0){
       int digit = n%10;
        if(digit==2|| digit==3||digit==5||digit==7){
            count++;
        }
        n = n/10;
        
    }
    printf("%d",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
