#include <stdio.h>
int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    int d = a - b;
    int sign = (d >> 31) & 1;
    
    int min = (sign * a) + ((1 - sign) * b);
     printf("%d", min);

    return 0;
}
