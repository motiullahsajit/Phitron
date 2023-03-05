#include<stdio.h>

int sum_arr(int arr[], int i, int n){
    if(i == n) return 0;
    int s = sum_arr(arr, i+1, n);
    return s + arr[i];
}

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("SUM = %d\n", sum_arr(arr, 0, n));
    
    return 0; 
}