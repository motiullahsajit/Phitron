#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,t,max;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&t);
        int runs[t];
        for(int j=0;j<t;j++){
            scanf("%d",&runs[j]);
        }

        max = runs[0];
        for(int j=0;j<t;j++){
            if(runs[j] > max && runs[j] < 100){
                max = runs[j];
            }
        }
        printf("%d\n",max);
    }

    

    return 0;
}
