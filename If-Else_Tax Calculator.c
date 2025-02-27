#include <stdio.h>

int main() {

    float num;
    scanf("%f", &num);
    if (num>=0 && num<=250000){
        printf("%0.2f", 0.00);
    }
    else if (num>250000 && num<=500000){
        printf("%0.2f", (num-250000)*5/100);
    }
    else if (num>500000 && num<=1000000){
        printf("%0.2f", (250000*5/100)+(num-500000)*20/100);
    }
    else if (num>1000000){
        printf("%0.2f", (250000*5/100)+(500000*20/100)+(num-1000000)*30/100);
    }
    else{
        printf("INVALID");
    }
}
