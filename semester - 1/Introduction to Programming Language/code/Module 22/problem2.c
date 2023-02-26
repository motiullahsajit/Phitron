#include<stdio.h>

int is_prime(int n);

int main(){
    
    int n;
    scanf("%d",&n);
    
    if(is_prime(n)){
        printf("%d is a prime\n",n);
    }else{
        printf("%d is a composite\n",n);
    }

    return 0;
}

int is_prime(int n){
    for(int i=2; i<n/2; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}