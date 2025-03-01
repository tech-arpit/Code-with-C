#include <stdio.h>
#include <string.h>

int main(){
    int m , y ;
    scanf("%d %d", &m ,&y);
    if(y<=0 || m<1 || m>12){
        if(m<1 || m>12){
            printf("Invalid Month\n");
        }
        if(y<=0){
            printf("Invalid Year\n");
        }
    }
    else if(y%4==0 && (y%100!=0 || y%400==0)){
        if(m==2){
            printf("29\n");
        }
        else if(m==4 || m==6 || m==9 || m==11){
            printf("30\n");
        }
        else{
            printf("31\n");
        }       
    }
    else if(m==2){
        printf("28\n");
    }
    else if(m==4 || m==6 || m==9 || m==11){
        printf("30\n");
    }
    else{
        printf("31\n");
    }
        
    return 0;
}
