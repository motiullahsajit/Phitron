#include<stdio.h>

int sum(int n,int arr[]){
    int total = 0;
    for(int j = 0; j< n; j++){
        if((j+1)%2 == 0 && arr[j]%2 == 0)
            total += arr[j] + j +1;
        
        if((j+1)%2 != 0 && arr[j]%2 != 0)
            total += arr[j] + j +1;
    }

    return total;
}


int main(){

    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("%d\n",sum(n,arr));
    
    return 0;
}