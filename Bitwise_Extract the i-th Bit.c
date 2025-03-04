#include <stdio.h>

int main() {
    int n, i;
 scanf("%d", &n);
    scanf("%d", &i);
    
     n = (n>>i & (1));  
    printf("%d" ,n );
    
    return 0;
}
