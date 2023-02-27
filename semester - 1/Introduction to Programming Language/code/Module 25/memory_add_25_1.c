#include<stdio.h>

int main(){

    
    char arr[9] = {1,2,3,4,5,6,7,8,9};

    for(int i=0; i<9; i++){
        printf("%p\n",arr[i]);
    }

    int a = 222;

    printf("a d = %d\n", &a);
    printf("a p = %p\n", &a);

    return 0;
}