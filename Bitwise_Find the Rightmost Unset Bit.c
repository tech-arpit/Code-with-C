#include <stdio.h>

int main() {

     int n;
    scanf("%d", &n);
    if(n==-1){
        printf("-1");
    }
    else{
        for(int i=0; i<=31; ++i){
            int result = n&1;
            if(result==0){
                printf("1");
                break;
            }
            if(result!=0){
                int flag=n>>i&1;
                if(flag==0){
                    printf("%d", i+1);
                    break;
                }
            }
        }
    }
    return 0;
}
