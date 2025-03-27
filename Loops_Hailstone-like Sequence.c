#include <stdio.h>

int main() {

  int n, max=1;
  scanf("%d", &n);
  printf("%d", n);
  
  while(n>=1){
    if (n>max){
      max = n;
    }
    if (n == 1){
      printf("\nMax Number: %d",max);
      return 0;
    }
    if(n%3==0){
      n = n/3;
      printf(" -> %d", n);
    }
    else if(n%5==0 && n%3!=0){
      n = n-5;
      printf(" -> %d",n);
    }
    else if(n<1){
      n = 1;
      printf(" -> %d",n);
    }
    else{
      n = n*5;
      printf(" -> %d",n);
    }
  }
  if (n<1){
    n = 1;
    printf(" -> %d\n",n);
    printf("Max Number: %d",max);
    return 0;
    
  }
  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
