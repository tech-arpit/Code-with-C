#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if((N%2==0 && N>15) && N%3==0 && N%7==0){
        printf("The verdict for the number %d is: SUPERNATURAL" ,N);
    }
    else if(N%2==0 && N>15 && N%3==0){
         printf("The verdict for the number %d is: MIRACULOUS" ,N);
    }
    else if((N>15 && N%3==0) && N%7==0){
            printf("The verdict for the number %d is: MIRACULOUS" ,N);
    }
    else if((N%2==0 && N>10) && N%7==0){
            printf("The verdict for the number %d is: MIRACULOUS" ,N);
    }
    else if( N>10 && N%2==0 ){
            printf("The verdict for the number %d is: MAGICAL" ,N);
    }
    else if(N>15 && N%3==0){
            printf("The verdict for the number %d is: MAGICAL" ,N);
    }
    else if(N%7==0 && N>0){
            printf("The verdict for the number %d is: MAGICAL" ,N);
    }
    else if(N==0 || N<0){
        printf("The verdict for the number %d is: INVALID" ,N);
    }
    else{
        printf("The verdict for the number %d is: NORMAL" ,N);
     }
    return 0;
}
