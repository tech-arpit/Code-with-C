#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int sign = (a>>31)&1;
    if(sign == 1){
        printf("Negative");
    }
    else{
        printf("Positive");
    }
    return 0;
}
