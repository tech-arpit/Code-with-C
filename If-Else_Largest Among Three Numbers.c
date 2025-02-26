#include <stdio.h>

int main() {
 int a,b,c;
    scanf("%d", &a);
     scanf("%d", &b);
     scanf("%d", &c);
    if(a>=b && a>=c){
        printf("The largest number is : %d",a);
    }
    else if(b>=a && b>=c){
        printf("The largest number is : %d",b);
    }
    else if(c>=a && c>=b){
        printf("The largest number is : %d",c);
    }
     
     
    
    return 0;
}
