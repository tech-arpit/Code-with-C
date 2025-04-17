#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // User se ek number input lena

    int q = n, result = 0;  // q variable ko n se initialize kar rahe hain, result ko 0 rakha

    while (q != 0) {  // Jab tak number 0 nahi ho jata, loop chalega
        int rem = q % 10;  // Last digit (remainder) nikalna

        int fact = 1; // Har digit ke liye factorial ko 1 se initialize karna

        // Factorial calculate karna
        for (int i = 1; i <= rem; i++) {
            fact *= i;  // fact = fact * i; (Factorial multiply karna)
        }

        // Digit ka factorial result me add karna
        result += fact;

        // Next digit ke liye number ko chhota banana (last digit hata dena)
        q /= 10;
    }

    // Check karna ki sum of factorials original number ke barabar hai ya nahi
    if (result == n) {
        printf("YES\n");  // Agar barabar hai to "YES" print karna (Strong number)
    } else {
        printf("NO\n");   // Agar nahi hai to "NO" print karna
    }

    return 0;
}
