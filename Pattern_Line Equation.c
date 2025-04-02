#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
  if(n%2==1)
  {  
        for(int i=1 ; i<=n ; ++i)
        {
            for(int j=1 ; j<=n ; ++j)
            {
                if(i==1 || i==n)
                printf("*");

                else{
                    if(j==(n+1)/2 ) 
                        printf("*");
                    else
                        printf(" ");
                    }
            }
             printf(" ");
             printf(" ");
            
            for(int j=1 ; j<=n ;++j)
            {
                if(j==1 || j==n ||i==j)
                printf("*");
                else
                printf(" ");

                
            }
             printf(" ");
             printf(" ");
             for(int j=1 ; j<=n ;++j)
            {
                if(j==1 || j==n ||i==j)
                printf("*");
                else
                printf(" ");

                
            }
            
             printf(" ");
             printf(" ");
            
              for(int j=1 ; j<=n ;++j)
              {
             if((i==1 && j==1) || (i==1 && j==n) || (i==n && j==1) || (i==n && j==n))
              {
                  printf(" "); 
              }
                  
                  else
                  {
                 if(j==1 || j==n || i==1 || i==n)  
                      printf("*");
                    else
                printf(" ");
                  }
              }
            
             printf(" ");
             printf(" ");
            
              for(int j=1 ; j<=n ;++j)
              {
                    if(i==j)
                    printf("*"); 
                    else
                    printf(" ");
              }
            
             for(int j=2 ; j<=n ;++j)
              {
                    if(i+j==n+1)
                    printf("*"); 
                    else
                    printf(" ");
              }
            
             printf(" ");
             printf("  ");
            
            for(int j=1 ; j<=n ;++j)
            {
                if((i==1 && j==1) || (i==1 && j==n))
                {
                     printf(" ");
                }
                    
                else {   
                if(j==1 || j==n || i==1 || i==n/2+1)
                   printf("*"); 
                    else
                    printf(" ");  
                }   
            }
             printf(" ");
             printf(" ");
            
               for(int j=1 ; j<=n ;++j)
               {
                   if(i==1 || j==n/2+1)
                     printf("*"); 
                    else
                    printf(" ");     
               }
            printf(" ");
             printf(" ");
            
              for(int j=1 ; j<=n ; ++j)
            {
                if(i==1 || i==n)
                printf("*");

                else{
                    if(j==(n+1)/2 ) 
                        printf("*");
                    else
                        printf(" ");
                    }
            }
            
             printf(" ");
             printf(" ");
             for(int j=1 ; j<=n ;++j)
              {
             if((i==1 && j==1) || (i==1 && j==n) || (i==n && j==1) || (i==n && j==n))
              {
                  printf(" "); 
              }
                  
                  else
                  {
                 if(j==1 || j==n || i==1 || i==n)  
                      printf("*");
                    else
                printf(" ");
                  }
              }
              printf(" ");
             printf(" ");
            
             for(int j=1 ; j<=n ;++j)
            {
                if(j==1 || j==n ||i==j)
                printf("*");
                else
                printf(" ");

                
            }
            
            printf("\n");
            
            
        }
  }
    
    return 0;
}
