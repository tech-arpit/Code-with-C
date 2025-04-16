#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int q = n; 

    while (n >= 10)
    { 
        int sum = 0;
        
        while (n > 0) 
        {  
            
            sum += n % 10;
            n /= 10;
        }
        
        n = sum; 
    }

    if (n == 1) {
        printf("%d is a magic number",q);
    } else {
        printf("%d is not a magic number",q);
    }

    return 0;
}
