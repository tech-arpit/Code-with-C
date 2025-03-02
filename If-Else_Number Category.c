#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    if(n%2==0 && n%3==0 && n%5!=0){
        printf("A");
    }
    else if(n>20 &&(n==21||n==22||n==33||n==35||n==55||n==77)){
            printf("B");
    }
     else if(n>=10 && n<=99 &&((n%3==0 && n%7!=0)||(n%3!=0 && n%7==0))){
        printf("C");
    }else if(n==1||n==4||n==9 ||n==16||n==25||n==36||n==49||n==64||n==81||n==100||n==121||n==144||n==169||n==196){
        printf("D");
    }else{
        printf("E");
    }
    return 0;
}
