#include <stdio.h>

int main() {
    int n ;
    scanf("%d", &n);
    if(n<2)
      printf("Shape Not Possible");
    else{

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            if( j==1 ||i==n ||j==i)
           { 
            printf("*");
           }
           else{
               printf(" ");
           }
        }
   
    
        int a= 2*n-2;
        for(int j=a; j> 2*i-2 ; --j){
            printf(" ");
          
        }
        
        for(int j =1 ; j<= n; ++j){
            if( j==1 ||i==n|| j==i )
           { 
            
            printf("*");
        }
        else{
            printf(" ");
            
        }
        
        }
        printf("\n");
    }
    }
    return 0;
}
