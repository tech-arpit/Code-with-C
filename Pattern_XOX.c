#include <stdio.h>

int main() {
int n;
  scanf("%d",&n);
  
  if(n>1){
  if(n%2==0){
    n+=1;
  }
  int pos=(n+1)/2;
  for(int i=1; i<=n; ++i){
    for(int j=1; j<=n; ++j){
      if(i==pos||j==pos)
        printf("x");
      else
        printf("o");
    }
    printf("\n");
  }
  }
  else{
    printf("Shape Not Possible");
  }
  
    return 0;
}
