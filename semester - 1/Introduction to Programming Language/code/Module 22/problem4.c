#include<stdio.h>

int add_them(int n, int arr[]){
    int sum = 0;
    for(int i=0; i<n; i++)sum += arr[i];
    return sum;
}

int main(){
    int arr[]={13,74,174,234,4,3,6,345,54};
    printf("Sum of elements = %d\n",add_them(9,arr));
}