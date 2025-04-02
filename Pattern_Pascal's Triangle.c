#include <stdio.h>

   int main() 
   {
int n;
    scanf("%d", &n);
    int c=1;
    for(int i =0; i<n ; ++i)
    {    
        for(int k =1 ; k<n-i ; ++k)
        {
            printf(" ");
        }  
        for(int j =0 ; j<=i ; ++j)
        {
                 if(j==0)
                   c=1;     
               else
                     c=c*(i-j+1)/j;
                     printf("%d ",c);
        }
        printf("\n");
    }   
}
