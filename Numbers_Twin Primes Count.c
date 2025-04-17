#include <stdio.h>

int main() {

  int n;
    scanf("%d", &n);
    int count=0;
        
    
        for(int i=2 ; i<=n-2 ; ++i)
        {
            int flag=1;
            int flagnew=1;
           for(int j=2 ; j*j<=i ; ++j){ 
                if(i%j==0)
                {
                   flag=0;
                    break;
                }
           }

            for(int k=2 ; k*k<=i+2 ; ++k)
            {
                    if((i+2)%k==0)
                    {
                       flagnew=0;
                        break;
                    }
                    
            }
             if(flag & flagnew)
                    {
                        count++;
                    }
        }
        
    printf("%d", count);
}
