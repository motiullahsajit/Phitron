#include<stdio.h>

int main(){

    int t,n,k;
    scanf("%d",&t);

    for(int i = 0; i < t;i++){
        scanf("%d",&n);
        
        k = n/4;

        for(int i=-3; i<=3; i+=2)
            printf("%d ",k+i);
            
        printf("\n");
    }
    
    return 0;
}