#include<stdio.h>

int main(){

    int i,n, m;

    scanf("%d %d", &n,&m);

    if(n < m){
        for(i=n; i<=m;i++){
            printf("%d\t",i);
        }
    }else{
        for(i=n; i<=24+m; i++){
            if(i>23){
                printf("%d\t",i%24);
            }else{
                printf("%d\t",i);
            }
        }
    }

    return 0;
}