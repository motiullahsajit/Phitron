#include<stdio.h>

void find_max_min(int len, int arr[],int* max,int* min){
    *max = arr[0];
    *min = arr[0];
    for(int i=0;i<len;i++){
        if(arr[i] > *max)
            *max = arr[i];
        
        if(arr[i] < *min)
            *min = arr[i];

    }
};


int main(){

    int arr[] = {1,-2,3,4,5,6,7,80};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max,min;

    find_max_min(len,arr,&max,&min);

    printf("max = %d, min = %d\n",max,min);

    return 0;
}