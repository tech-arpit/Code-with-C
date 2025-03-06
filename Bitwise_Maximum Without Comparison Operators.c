#include<stdio.h>

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    int sign = (a - b)>>31;
    int max = (a & (~sign)| b & sign);
    
    
     printf("%d",max);

    return 0;
}
