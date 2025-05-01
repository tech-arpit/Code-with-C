#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    float bill;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid Input!");
        return 0;
    }
    else if(n<=100){
        bill = n*5;
    }
    else if(n<=300 && n>100){
         bill = (100 * 5) + ((n - 100) * 7);
    }
    else if(n>300){
         bill = (100 * 5) + (200 * 7) + ((n - 300) * 10);
    }
    if(bill<=1200){
        bill = bill * 90/100;
    }

    printf("The electricity bill is: %.2f.", bill);
   
      
}
