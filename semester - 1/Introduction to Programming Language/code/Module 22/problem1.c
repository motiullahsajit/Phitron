#include<stdio.h>

int even_or_odd(int n);

int main(){
    int n;
    scanf("%d",&n);
    
    if(even_or_odd(n)){
        printf("%d in an Even Number\n",n);
    }else{
        printf("%d in an ODD Number\n",n);
    }
    
    return 0;
}

int even_or_odd(int n){
    if(n%2==0) return 1;
    else return 0;
}