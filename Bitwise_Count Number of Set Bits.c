#include <stdio.h>

int main() {
    int n ;
scanf("%d" ,&n);
n =  n&15;
     int total;
total = (n&1) + ((n>>1)&1)+ ((n>>2)&1)+ ((n>>3)&1);
    printf("%d" ,total);
    
    
    
    
    return 0;
}
