#include <stdio.h>

int main() 
{
    int num,original,rev = 0;
    scanf("%d",&num);
    original = num ; // store original no. so that u can compare opp. hai ya nhi 
    while(num>0)
    {
        int last_digit = num % 10;
        rev = rev * 10 + last_digit;
        num = num/10;
        }
    if(original == rev )
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}
