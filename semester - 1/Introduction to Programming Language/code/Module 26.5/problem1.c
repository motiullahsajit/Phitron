#include<stdio.h>

int main(){

    int x, y;

    scanf("%d %d",&x, &y);

    int *xp, *yp;
    
    xp = &x;
    yp = &y;

    printf("%.3f\n",((*xp+*yp)/2.00));


    return 0;
}