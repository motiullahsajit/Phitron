#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, i;
    scanf("%d",&n);

    int* ptr;
    ptr = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d",(ptr+i));
    }

    for(int i=0; i<n; i++){
        printf("i = %d -> %d\n",i,*(ptr+i));
    }

    free(ptr);

    for(int i=0; i<n; i++){
        printf("i = %d -> %d\n",i,*(ptr+i));
    }

    return 0;
}