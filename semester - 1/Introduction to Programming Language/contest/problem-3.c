#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,t,tc,hc;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        tc=0;
        hc=0;
        scanf("%d",&t);
        char toss[t];
        for(int j = 0;j<t;j++){
            scanf(" %c",&toss[j]);
        }

        for(int j = 0;j<t;j++){
            if(toss[j] == 'H'){
                hc++;
            }else if(toss[j] == 'T'){
                tc++;
            }   
        }
        
        if(hc > tc){
            printf("England\n");
        }else{
            printf("Pakistan\n");
        }
    }

    

    return 0;
}
