#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int n,sum;
    scanf("%lld",&n);

    sum = (n*(n-1))/2;

    printf("%lld\n",sum);

    return 0;
}
