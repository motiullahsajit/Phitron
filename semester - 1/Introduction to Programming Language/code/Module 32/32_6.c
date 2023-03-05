#include<stdio.h>

int sum_arr(int arr[],int n){
    if(n == 0) return 0;
    int s = sum_arr(arr+1,n-1);
    return s + *arr; // arr[0] -> *arr
}


int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("SUM = %d\n", sum_arr(arr,n));

    return 0;
}