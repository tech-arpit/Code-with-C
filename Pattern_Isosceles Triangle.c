#include <stdio.h>

int main() {
int n ;
    scanf("%d",&n);
    if(n<=1 || n>50){
        printf("Shape Not Possible\n");
        return 0;
    }
    
         for(int i = 1; i<=n; ++i){
        
        for(int k = 1; k<= n-i ; k++){
            printf(" ");
        }
        for(int j =1;j<=2*i-1; j++){
              printf("*");
        }
      printf("\n");
        }   
    
   
    
      
    return 0;
}
