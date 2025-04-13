#include <stdio.h>
int main() {
        int n,p1,p2;
        scanf("%d", &n);
        for(int i=n+1;  ; ++i)
        {   int flag=0;
            for(int j=2 ; j<=i/2; ++j)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
         if(flag==0)
         {
          
             p1=i;
             break;
         }
        }  
    
     for(int i=n-1; i>=2 ; --i)
        {   int flag=0;
            for(int j=2 ; j<=i/2; ++j)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
         if(flag==0)
         {
             p2=i;
             break;
         }
        }  
    
    printf("%d",p1-p2);
    return 0;
}

