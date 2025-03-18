#include <stdio.h>

int main() {
int n;
    scanf("%d" ,&n);
   
    if(n>0){
         printf("<1"); 
        for(int i = 1; i<n; ++i)
    {
     printf(" %d", 1<<i);
    }
     printf(">");
        
    
    }
    
    return 0;
}
