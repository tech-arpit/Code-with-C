#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  if(n%2==0){
    n+=1;
  }
  if(n>1){
    for(int i=1; i<=n; ++i){
      for(int j=1; j<=n; ++j){
        if(j==i||j+i==n+1)
          printf("*");
        else
          printf(" ");
      }
      printf("\n");
    }
  }
  else{printf("Shape Not Possible");}
    return 0;
}
