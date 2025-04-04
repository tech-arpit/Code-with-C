#include <stdio.h>

int main() {
int v;
  scanf("%d",&v);
  if(v>=1 && v<=50){
  for(int i=1; i<=v; ++i){
    int x = i-1;
    int y=1;
    for(int k=1; k<=v-i; ++k){
      printf(" ");
    }
    for(int j=1; j<=2*i-1; ++j){
      if(x<0){
        printf("%d",y++);
        continue;
      }
       
      printf("%d",x--);
      
    }
    printf("\n");
  }
  }
    return 0;
}
