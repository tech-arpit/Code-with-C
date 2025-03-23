#include <stdio.h>

int main() {
int n;
    scanf("%d" ,&n);
    if(n>1 && n<=50){
    for(int i =1; i<=n;i++){
        
        for(int j=1;j<=i;j++){
            if(i==j || j==1){
            printf("*");
        }
        else{
            printf(" ");
        }}
    printf("\n");
    }
       
     for(int i = 2; i<=n;i++){
        for(int k=1;k<=n;k++){
            if(i+k==n+1 || k==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }}else{ printf("Shape Not Possible");}
    return 0;
}
