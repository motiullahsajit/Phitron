#include<stdio.h>

int main(){
    
    int a,b,c;
    
    printf("Please enter the three sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a +b > c && a+c > b && b + c > a){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}