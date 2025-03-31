#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d",&n);
  
  if(n>1){
  for(int i=1; i<=n; ++i){
    for(int j=1; j<=i; ++j){
      printf("*");
    }
    for(int k=1; k<=2*n-2*i; ++k){
      printf(" ");
    }
    for(int j=1; j<=i; ++j){
      printf("*");
    }
    printf("\n");
  }
    
   
    
    for(int i=2; i<=n; ++i){
      for(int j=1; j<=n+1-i; ++j){
        printf("*");
      }
      for(int k=1; k<=2*i-2; ++k){
        printf(" ");
      }
      for(int j=1; j<=n+1-i; ++j){
        printf("*");
      }
      
      printf("\n");
    }
    
  }else{printf("Shape Not Possible");}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
