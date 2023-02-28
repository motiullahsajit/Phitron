#include<stdio.h>

int main(){

    int n, count = 0,sum = 0;

    scanf("%d", &n);

    int flag_p = 1, flag_n = 0;

    for(int i=1; i<=n; i++){
        if(flag_p == 1){
            sum += i;
            count++;
            if(count == 3){
                flag_n = 1;
                count = 0;
                flag_p = 0;
            }
            continue;
        }
        if(flag_n == 1){
            sum -= i;
            count++;
            if(count == 3){
                flag_n = 0;
                count = 0;
                flag_p = 1;
            }
        }
    }

    printf("%d\n", sum);
    
    return 0;
}