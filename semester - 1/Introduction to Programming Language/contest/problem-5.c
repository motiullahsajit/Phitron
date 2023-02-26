#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,isMaiden = 0;
    int over[6];
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        isMaiden = 0;
        for(j = 0 ; j < 6; j++){
            scanf("%d",&over[j]);
        }

        for(j = 0 ;j<6;j++){
            if(over[j]!=0){
                isMaiden = 1;
                break;
            }
        }

        if(isMaiden==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }


    return 0;
}
