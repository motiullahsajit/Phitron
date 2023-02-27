#include<stdio.h>

void swap( int* x, int* y ){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main(){

    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j])
                swap(&arr[i],&arr[j]);
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");



    return 0;
}