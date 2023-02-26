#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,k,count = 0;    
    
    scanf("%d",&n);

    int roll[n];
    int newRow[n];

    for(i = 0; i < n; i++){
        scanf("%d",&roll[i]);
    }

    scanf("%d",&k);

    if(k<=0){
        for(i=0; i<n; i++){
            printf("%d ",roll[i]);
        }
    }else{
        for(i = k; i<n; i++){
            newRow[count] = roll[i];
            count++;
        }
        for(i = 0 ; i < k; i++){
            newRow[count] = roll[i];
            count++;
        }

        for(i = 0 ; i<n; i++){
            printf("%d ", newRow[i]);
        }
    }

    return 0;
}
