#include<stdio.h>

int is_seven(int n){
    int ld;
    while(n > 0){
        ld = n %10;
        if(ld == 7)return 1;
        n /= 10;
    }
    return 0;
}

int main(){

    int n,x;
    scanf("%d",&n);

    int seven_count = 0, seven_need;

    if(n%2 == 0)
        seven_need = n/2;
    else
        seven_need = (n/2) + 1 ;


    for(int i = 0; i <n; i++){
        scanf("%d",&x);
        if(is_seven(x)) seven_count++;
    }

    if(seven_count>=seven_need)
        printf("Beautiful\n");
    else 
        printf("Ugly\n");

    
    return 0;
}