#include <stdio.h>
#include <math.h>

int is_kaprekar(int n) {
    // Implement logic here
    int square =0,count =0, right=0,left =0,num = 0  ;
    int rem = 0 ;
    square = pow(n,2);
    int expo = square ; 
    while(expo!=0){
        ++count;
        expo= expo/10;
        
    }
    if(count%2==0){
        num = count/2;
        
        
   }
    else
    {  
      
        num = ( count / 2)+1 ;
        
    }
    
    rem = pow(10,num);
    right = square % rem ; 
    left = square/ rem ; 
      int  sum    = right + left; 
    if(sum == n){
        return 1;
    }
    else {
        return 0;
    }
    
    
    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_kaprekar(n));
    return 0;
}
