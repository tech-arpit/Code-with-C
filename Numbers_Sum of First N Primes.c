#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;   // store krega sum n prime no. tak 
    int count = 0; // kitne prime no. mile i.e. count 

    
    for (int num = 2; count < n; num++) {
        int flag = 0; // flag reset for every number 

       
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 1; 
                break;
            }
        }

        if (flag == 0) { // it is Prime number.
            sum += num;  
            count++;     // incr. krne ke liye prime numbers ka count 
        }
    }

    printf("%d\n", sum); 
    return 0;
}
