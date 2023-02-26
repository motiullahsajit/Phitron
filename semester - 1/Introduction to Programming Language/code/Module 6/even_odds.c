#include<stdio.h>

int main(){
    long long int number,n,odds;
    
    scanf("%lld %lld",&number, &n);

    odds = number/2 + number%2;

    if(n > odds){
        printf("%lld\n",2*(n-odds));
    }else{
        printf("%lld\n",(2*n)-1);
    }

    return 0;
}