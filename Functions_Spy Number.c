#include <stdio.h>
#include<math.h>
int is_spy_number(int n) {
    int sum = 0;
   int product = 1 ;
    while(n!=0){
        int digit = n%10;
        product *= digit;
        sum += digit;
         n = n/10;
        }
    if (sum == product){
        return 1;
    }
    else {
        return 0;
    }
    }

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_spy_number(n));
   
       
    return 0;
}
