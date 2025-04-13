#include <stdio.h>

int main() {
    int n , sum =0;
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++)
    {
        if(n%i==0){
            sum = sum + i;  
        }
            if(sum==n)
            {
              printf("YES")  ;
                return 0;
            }
          }
      if(sum!=n)
      {
                printf("NO");
            }
     return 0;

    }
    

    
   
