#include <stdio.h>
int main() {
    int n, count = 0, num = 2;
    scanf("%d", &n);
    while (count < n) {
      int i,prime = 1;
        for (i=2; i*i<=num; ++i) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            count++;
        }
        num++;
    }    
       printf("%d ",--num);
    return 0;
}
