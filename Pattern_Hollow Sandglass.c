#include <stdio.h>

int main() {
int n;
    scanf("%d", &n);
       if(n>1)
    {
             for(int i=1 ; i<n ; ++i)
           {
                   for( int j=1; j<=i-1 ; ++j )  
                   {
                       printf(" ");
                   }
                 
                     for ( int k=1 ;k<= 2*(n-i+1)-1 ; ++k)
                     {
                        if(k==1 || k==2*(n-i+1)-1 || (i==1 && k%2==1))
                         printf("*");   
                         else
                         printf(" ");    
                     }
                 printf("\n");
           }
           
           for(int i=1 ; i<=n ; ++i)
           {
                for( int j=1; j<=n-i ; ++j )  
                   {
                       printf(" ");
                   } 
               
                for ( int k=1 ;k<= 2*i-1 ; ++k)
                {
                    if(k==1 || k== 2*i-1 || (i==n && k%2==1))
                         printf("*");   
                    else
                         printf(" ");    
                }
               
               printf("\n");
           }
       }
        else
        printf("Shape Not Possible");
    }
