#include <stdio.h>

int main() {
    int n;
 scanf("%d", &n);
 if (n <= 0) {
        printf("-1\n"); 
    } else if ((n & (n - 1)) == 0) {
        printf("1\n");   
    } else {
        printf("-1\n"); 
    }

    return 0;
}
