#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N&1) {
        printf("Odd\n");
    } else {
        printf("Even\n");
    }
    
    return 0;
}
