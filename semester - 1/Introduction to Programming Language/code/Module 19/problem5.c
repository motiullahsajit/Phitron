#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",i);
        for(j=2;j<n;j++){
            if(i==1){
                printf("%d",j);
            }else if(i==n){
                 printf("%d",n);
            }else{
                printf(" ");
            }
           
        }
        if(n!=1){
            printf("%d\n",n);
        }
    }
   
    return 0;
}
