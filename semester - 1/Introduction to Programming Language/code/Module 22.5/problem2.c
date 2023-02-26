#include<stdio.h>

int get_prime(int n){
    n++;
    int flag = 1;
    for(int i=2;i<=n/2;i++){
        if(n%i == 0){
            flag = 0;
        }
    }
    if(flag == 1){
        return n;
    }else{
        get_prime(n);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int last_prime = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            last_prime = get_prime(last_prime);
            printf("%d ",last_prime);
        }   
        printf("\n");
    }
    
    return 0;
} 