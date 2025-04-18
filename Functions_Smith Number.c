#include <stdio.h>

int digits_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int prime_factor_digit_sum(int n) {
    int sum = 0;
    int temp = n;

    for (int i = 2; i * i <= temp; i++) {
        while (n % i == 0) {
            sum += digits_sum(i);
            n /= i;
        }
    }

    if (n > 1) {
        sum += digits_sum(n);
    }
    
    return sum;
}

int is_smith_number(int n) {
    
    if (is_prime(n)) return 0;

    return digits_sum(n) == prime_factor_digit_sum(n);
}

int main() {
    int n;
    scanf("%d", &n);

    if (is_smith_number(n))
        printf("1");
    else
        printf("0");

    return 0;
}
