#include <stdio.h>

int main() {
int a, b;
     scanf("%d", &a);
     scanf("%d", &b);
    a = a^b;
    b= b^a;
    a = a^b;
    printf("%d\n%d", a,b);
    
    return 0;
}
