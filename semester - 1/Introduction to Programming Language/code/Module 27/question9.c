#include<stdio.h>
#include<math.h>

int is_prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}


int main(){

    int n,prime_count = 0, sum_even = 0,even_count;

    scanf("%d",&n);
    
    int x;

    for(int i=0; i<n; i++){
        scanf("%d",&x);
        if(is_prime(x)) prime_count ++;
        if(x%2 == 0){
            sum_even += x;
            even_count++;
        }    
    }

    printf("Prime numbers: %d\n",prime_count);
    printf("Average of all even integers: %.2f\n",(float)sum_even/(float)even_count);

    
    return 0;
}