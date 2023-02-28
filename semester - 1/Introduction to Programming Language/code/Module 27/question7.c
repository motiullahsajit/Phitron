#include<stdio.h>

void swap(int *x, int *y){
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

    int t, l,r;

    scanf("%d",&t);
    
    for(int i=0; i<t; i++){
        scanf("%d %d", &l, &r);
        l--; r--;
        swap(&arr[l],&arr[r]);
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    
    return 0;
}