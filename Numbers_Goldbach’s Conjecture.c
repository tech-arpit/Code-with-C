#include <stdio.h>
      
  
int main() {

    int n;
    scanf("%d", &n);
    int p,q;
    
    if(n%2==0 && n>2)
    {
          for(int i=2; i<=n/2 ; ++i)
          {       int prime=1;
                  for(int j=2 ; j*j<=i ; ++j)
                  {
                      if(i%j==0)
                      {
                          prime=0;
                          break;
                      }
                  }    
               if(prime==1)
               {        
                  int  q=n-i;     
                  int qprime=1;
                   for(int j=2; j*j<=q; ++j)
                   {  
                        if(q%j==0)
                        {
                           qprime=0;
                            break;
                        }
                   }

                   if (prime==1 && qprime==1)
                   {
                       printf("%d %d ", i , q);
                       return 0;
                   }

               }       
          }  
           
    }
    else
        printf("No Solution");

    return 0;
    
}
