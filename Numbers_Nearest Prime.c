#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int isprime = 1;
    if (n <= 1) {
        isprime = 0; 
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isprime = 0;
                break;
            }
        }
    }

    if (isprime) {
        printf("%d\n", n);
        return 0;
    }

    int smaller = n - 1, larger = n + 1;

    while (1) {
        int smallerprime = 1;
        if (smaller <= 1) {
            smallerprime = 0;
        } else {
            for (int i = 2; i <= sqrt(smaller); i++) {
                if (smaller % i == 0) {
                    smallerprime = 0;
                    break;
                }
            }
        }

        int largerprime = 1;
        if (larger <= 1) {
            largerprime = 0;
        } else {
            for (int i = 2; i <= sqrt(larger); i++) {
                if (larger % i == 0) {
                    largerprime = 0;
                    break;
                }
            }
        }

        if (smallerprime) {
            printf("%d\n", smaller);
            break;
        } 
        else if (largerprime) {
            printf("%d\n", larger);
            break;
        }

        smaller--;
        larger++;
    }

    return 0;
}
