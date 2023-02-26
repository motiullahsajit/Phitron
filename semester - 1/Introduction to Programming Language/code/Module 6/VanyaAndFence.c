#include<stdio.h>

int main(){
    int i,input,max_height,min_width=0;

    scanf("%d %d",&i,&max_height);

    for(i=i; i>0;i--){
        scanf("%d", &input);

        if(input > max_height){
            min_width +=2;
        }else{
            min_width +=1;
        }
    }

    printf("%d",min_width);
}