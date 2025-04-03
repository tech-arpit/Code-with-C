#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       int k=i;
        for(int j=1;j<=i;j++){
            
            printf("%d ",k);  
            k = k+(n-j);
       }
    printf("\n");
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
