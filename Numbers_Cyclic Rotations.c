#include <stdio.h>

int main() {
int num,digit=0,ten=1;
    scanf("%d",&num);
    int temp = num;
    while(num!=0){
       ++digit; // for counting the no. of digits 
        num /= 10;
        ten *= 10;
    }
    ten /= 10;
    for(int i=1; i<=digit; ++i){
        int rem = temp % 10;
        temp /= 10;
        int x = rem * ten + temp; 
        printf("%d\n",x);
        temp = x;
    }
    
    return 0;
}
