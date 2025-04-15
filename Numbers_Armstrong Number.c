#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int temp = n;  
    int num = n;  
    int reverse = 0;

    if (n < 0)
    {
        printf("NO");
        return 0;
    }

    int count = 0;
    while (num != 0)
    {
        count++;
        num = num / 10;
    }

    for (; temp != 0;) 
    {
        int i = temp % 10;
        reverse = reverse + pow(i, count);
        temp = temp / 10;
    }

    if (reverse == n) 
    {
        printf("YES");
    } else
    {
        printf("NO");
    }

    return 0;
}
