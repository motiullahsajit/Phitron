#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, n, sum, a, b, c;

    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf("%d %d %d %d",&sum, &a,&b,&c);
        printf("%d\n",sum-(a+b+c));
    }

    return 0;
}
