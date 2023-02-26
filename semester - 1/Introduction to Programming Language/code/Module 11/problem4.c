#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n=0,max;
    
    scanf("%d",&n);

    int marks[n];

    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }

    max =marks[0];

    for(i=0;i<n;i++){
        if(marks[i] > max){
            max = marks[i];
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d ", max-marks[i]);
    }

    return 0;
}
