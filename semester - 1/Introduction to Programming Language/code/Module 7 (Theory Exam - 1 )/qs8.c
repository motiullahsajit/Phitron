#include<stdio.h>
int main(){

    int x, y,gcd=1;

    scanf("%d %d",&x,&y);


    if(x<y){
     for(int i = x; i > 1; i--){
            if(x%i == 0 && y%i == 0){
                gcd = i;
                break;
            }
        }
    }else{
        for(int i = y; i > 1; i--){
            if(x%i == 0 && y%i==0){
                gcd = i;
                break;
            }
        }
    }

    printf("The LCM of %d and %d is %d.",x,y,(x*y)/gcd);


    return 0;

}

