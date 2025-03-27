#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    if(n==0)
    { printf("0");}
    else{
             for(int i=0; i<=31; i++)
            {
                int r = n&(1<<i);
                if(n!=0)
                {
                    if(r!=0)
                    {
                    printf("%d",i+1);
                    break;
                    }
                } 
            }             
          }
    return 0;
}
