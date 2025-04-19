#include <stdio.h>

int find_unique_digit_product(int n) {
    int num=n,pdt=1,dig=0,num2;
    
    
   if(n==0){
       return 0;
   }
    else{
         while(num>0){
        int rem=num%10;
        num=num/10;
        
        num2=num;
        int flag=1;
        while(num2>0){
            dig=num2%10;           
            if(dig==rem){
                flag=0;
                break;
            }
            num2=num2/10;
        }
        if(flag){
            pdt=pdt*rem;
        }
    }
    return pdt;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}
