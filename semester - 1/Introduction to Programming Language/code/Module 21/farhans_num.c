#include<stdio.h>

int shat_present(int n);
int d_sum(int n);
int last_dig_prime(int n);

int main(){
    int n;
    scanf("%d",&n);

    if(shat_present(n)==1 && d_sum(n)>10 && last_dig_prime(n)==1){
        printf("Farhan's Number\n");
    }else{
        printf("Not Farhan's Number\n");
    }
}


int shat_present(int n){
    while (n>0)
    {
       if(n%10==7){
            return 1;
       }else{
            n/=10;
       }

    }
    return 0;
};
int d_sum(int n){
    int sum = 0;

    while (n>0)
    {
       sum += n%10;
       n/=10;

    }
    return sum;;
};
int last_dig_prime(int n){
    if(n%10 == 2 || n%10 == 3 || n%10 == 5 || n%10 == 7){
        return 1;
    }else{
        return 0;
    }
};