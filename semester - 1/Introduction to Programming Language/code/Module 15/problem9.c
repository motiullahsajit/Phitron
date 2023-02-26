#include<stdio.h>

int main(){
    int i,j,temp;
    int ara[11]={12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};


    for(i=0;i<5;i++){
        for(j=0;j<11-1;j++){
            if(ara[j]>ara[j+1]){
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1] = temp;
            }
        }
    }

    for(i=0;i<11;i++){
        printf("%d ",ara[i]);
    }

    return 0;
}
