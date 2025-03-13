#include <stdio.h>

int main() {
int n ,m ,i ;
    //n= no.of multiples to be printed .
    // m = whose multiple wiil be printed .
    // i = upto how many numbers multiple should be printed .
    scanf("%d %d", &n ,&m );
    for(i = 1; i<=n; ++i){
        printf("%d " ,i*m);
    }
    return 0;
}
