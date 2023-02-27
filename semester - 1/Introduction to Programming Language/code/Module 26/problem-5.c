#include<stdio.h>

int is_leap(int y){
    if(y%400 || (y%4==0 && y%100 !=0))
        return 1;
    else
        return 0;
}

int is_distinct(int y){

    int arr[10] = {0};
    int ld;

    while (y > 0) 
    {
        ld = y%10;
        arr[ld]++;
        y/=10;
    }

    for(int i = 0; i < 10; i++){
        if(arr[i] > 1)
            return 0;
    }
    
    return 1;
}

int main(){

    int n;
    scanf("%d", &n);

    if(is_leap(n) && is_distinct(n))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}