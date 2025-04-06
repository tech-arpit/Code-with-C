#include <stdio.h>
#include <math.h>
int main() {

    int l,r;
    scanf("%d %d", &l,&r);
    int count=0;
    int prime=1;
    
    for(int i=l; i<=r; ++i){
        prime=1;
        
        if(i<=1){
            prime=0;
        }
        else{
            for(int j=2; j<=i/2; ++j){
                if(i%j==0){
                    prime=0;
                    break;
                }
            }
        }
        if(prime){
            printf("%d ",i);
            count++;
        }
    }
    if(count>0){
        printf("\n%d",count);
    }
    else{
        printf("%d",count);
    }
    return 0;
}
