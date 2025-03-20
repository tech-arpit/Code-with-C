#include <stdio.h>

int main() {

    int flag=0; // FLg initial = 0 , 45 KE LIYE 0
    int n;
    scanf("%d",&n);
    
     int one=1;
    
    for(int i=n ; i>=1 ; i--)
    {
        if((n%i)==0)  // FACTORS JAYENGE ANDAR
          {
          if (one)  // IF BLOCK
           {
              printf("%d", i); 
               one = 0; // FIRST = 0  RHEGI HUMESHA KE LIYE 
           }
           else  if(flag==0)  // ELSE BLOCK
          {
            printf(" %d",i);   
          }
            
          flag=1-flag; // JAB 45 PRINT HUA TO VALUE 
                       } // 1-0 FLAG =1 
        } 
    printf(".");
    }
