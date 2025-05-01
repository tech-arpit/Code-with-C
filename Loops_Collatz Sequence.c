#include <stdio.h>
#include<math.h>

int main() {
    int n;

    scanf("%d", &n);
    if (n < 1 || n > 100000) {
       return 1; 
    }
    printf("%d", n);

 
    for ( ;n != 1; ) // starting semicolon tells the end of initilization statement 
    {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1; 
        }
        printf(" -> %d", n); 
    }
    printf("\n"); 

    return 0; 
}
