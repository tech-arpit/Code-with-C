#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int xor = a ^ b;

    // Check agar xor power of 2 hai and non-zero hai ..
    if (xor > 0 && (xor & (xor - 1)) == 0) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
