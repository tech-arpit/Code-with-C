#include <stdio.h>

int main() {
    int N, almost = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        int num = i;
        int count = 0;

        for (int j = 2; j * j <= num; j++) {
            while (num % j == 0) {
                count++;
                num /= j;
            }
        }
        if (num > 1) {
            count++;
        }

        if (count == 2) {
            almost++;
        }
    }

    printf("%d\n", almost);
    return 0;
}
