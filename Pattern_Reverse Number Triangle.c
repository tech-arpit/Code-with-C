#include <stdio.h>

int main() {
int n;
    int count=0;
    scanf("%d",&n);
    for(int i =1; i<=n;i++){
    int a=i;           
        count= count+a;
           int c=count;
        for(int j=1;j<=i;j++){
            if(i==1)
                printf("%d",count);
            else if(j==1 && i!=1)
            printf("%d ",count);
                else
                     printf("%d ",--c);
            
        }
        
printf("\n");
    }
    return 0;
}
