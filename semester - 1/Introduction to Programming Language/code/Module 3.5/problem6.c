#include<stdio.h>

int main(){
    int mark, bonus;

    printf("Enter you mark and bonus mark: ");
    scanf("%d %d",&mark,&bonus);

    if(mark+ bonus >=100){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}