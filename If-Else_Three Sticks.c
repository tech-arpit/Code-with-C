#include <stdio.h>

int main() {
    int a , b , c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && c+b>a){
        if(a==b && b==a && c==b){
           printf("Lengths: [%d, %d, %d] \nType: Equilateral \nAll sides are of the same length." ,a, b, c);
        }
        else if(a==b || b==c || a==c){
            printf("Lengths: [%d, %d, %d] \nType: Isosceles \nExactly two sides are equal." ,a, b, c);
        }
        else{
            printf("Lengths: [%d, %d, %d]\nType: Scalene\nAll sides are of different lengths.",a,b,c);
        }
            }
    else{
        printf("Lengths: [%d, %d, %d]\nType: Invalid\nCannot form a valid shape.",a,b,c);
    }
    
    return 0;
}
