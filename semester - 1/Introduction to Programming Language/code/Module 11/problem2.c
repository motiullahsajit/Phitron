#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, n, k, run, count=0;

    scanf("%d %d", &n, &k);

    for(i=0; i<n; i++) {
        scanf("%d",&run);
        if(run<k){
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}
