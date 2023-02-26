#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,t,count;
    int squareRoot;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        count = 0;
        scanf("%d",&t);
        int runs[t];
        for(int j = 0;j<t;j++){
            scanf("%d",&runs[j]);
        }

        for(int j = 0;j<t;j++){
            squareRoot = sqrt(runs[j]);
            if(sqrt(runs[j]%squareRoot==0)){
                count++;
            }
        }
        
        if(count>0){
            printf("%d\n",count);
        }else{
            printf("%d\n",-1);
        }
    }

    

    return 0;
}
