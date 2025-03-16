#include <stdio.h>

int main() {
int n ;
   scanf("%d " ,&n); 
    if(n==0){
        return 0;
    }
    int z = n*2-1;
     
   
    for(int i = z; i>=1; i = i-2){
        printf("%d" ,i);{
            if(i>1){
                printf(" ");
            }
        }
    }
    printf(".");
    return 0;
}
