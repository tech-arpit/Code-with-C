#include <stdio.h>

int main() {
int n;
    scanf("%d" ,&n);
    if(n<=1||n>50){
        printf("Shape Not Possible"); return 0;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; ++j){
        printf(" ");
        }
        for(int k=1; k<=i; ++k){
        printf("*");
        } 
        printf("  ");
        for(int k=1; k<=i; ++k){
        printf("*");
        } 
printf("\n");    
    }
    
    return 0;
}
