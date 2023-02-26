#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,n,t,yes_no = 0;

    scanf("%d",&t);

    for(i = 0; i < t; i++) {
        scanf("%d",&n);
        if(n <= 1){
            printf("No\n");
        }else if(n ==2){
            printf("Yes\n");
        }else{
            for(j=2; j<n; j++) {
            if(n%j == 0){
                yes_no = 0;
                break;
            }else{
                yes_no = 1;
            }
        }
        if(yes_no == 0){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
        }
    }

    return 0;
}
