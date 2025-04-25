#include <stdio.h>
#include<math.h>
int is_disarium_number(int n) {
    // Implement this function
    int num = n;
    int sum = 0 ;
    int count = 0 ;
    while(num!= 0 ){
             ++count;
        num = num/10;
        }
    num = n;
    while(num!=0){
        int rem = num%10;
        sum += pow(rem , count);
        count--;
        num /= 10;
         }
    if(sum == n){
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_disarium_number(n));
    return 0;
}
