#include <stdio.h>

int main() {
int n,m,z;
    scanf("%d\n%d %d", &n,&m,&z);
    for(int i=1; i<=n; ++i){
        printf("%d ",m);
        m=m+z;
    }
    return 0;
}
