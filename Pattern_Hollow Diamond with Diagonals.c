#include <stdio.h> 

int main() {
int n;
    scanf("%d",&n);
    if(n<=1||n>50){
        printf("Shape Not Possible");
        return 0;
    }
  for(int i=1;i<=n;++i){
      for(int k=1;k<=n-i;++k){
          printf(" ");
      }
      for(int j=1;j<=2*i-1;++j){
          if(j==1||j==2*i-1||i==n||j==i){
              printf("*");
          }
          else
          printf(" ");
      }
      printf("\n");
  }
  for(int i=2;i<=n;++i){
     for(int k=1;k<i;++k){
          printf(" "); 
        }
      for(int j=1;j<=2*(n-i+1)-1;++j){
          if(j==2*(n-i+1)-1|| j==1||j==n-i+1){
              printf("*");
          }
          else{
          printf(" ");}
          
      } 
      printf("\n");
}
}
