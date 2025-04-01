#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);

    
    if(n%2==1){
        n++;
    }
    if(n>2){
    for(int i=1; i<=n/2;i++){
        for(int j=1; j<=(n/2)-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            if(k==1||i==k||k==2*i-1){
            printf("*");
        }
            else{
                printf(" ");
            }
        }
        
         printf("\n");
    } 
    
    for(int i=1;i<=n/2;i++){
        for(int j =1;j<=(n/2)-1;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
           
            if(k==1)
                printf("*");
              else{
            printf(" ");
        }
        }
      
        printf("\n");
    }
    }
    
    else
         printf("Shape Not Possible");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
