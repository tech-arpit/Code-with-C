#include <stdio.h>

int main() {
    int n, data = 1, s = 3;
    scanf("%d", &n);
    
    if (n >= 1 && n <= 50) {
        for (int i = 1; i <= n; ++i) {

            for (int k = 1; k <= n - i; ++k) {
                printf("  ");
            }
            
            int sum = 0;
        
            for (int m = 1; m <= 2 * (i - 1); ++m) {
                sum = sum + s;
                s += 2;
            }
            

            for (int j = 1; j <= 2 * i - 1; ++j) {
                if (i == j && i > 1) {
                    printf("%d ", sum);
                } else {
                    printf("%d ", data);
                    data += 2;
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}
