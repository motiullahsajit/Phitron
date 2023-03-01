#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, i;
    scanf("%d",&n);

    int* ptr;
    ptr = (int*)calloc(n,sizeof(int));

    if(ptr == NULL){
        printf("Memory allocation failure\n");
    }
    
    for(int i=0; i<n; i++){
        printf("i = %d -> %d\n",i,ptr[i]);
    }

    for(int i=0; i<n; i++){
        scanf("%d",(ptr+i));
    }

    for(int i=0; i<n; i++){
        printf("i = %d -> %d\n",i,*(ptr+i));
    }

    ptr = realloc(ptr,(n + 5) * sizeof(int));

    for(int i = n; i < n + 5; i++){
        scanf("%d",(ptr+i));
    }

    for(int i=0; i<n+5; i++){
        printf("i = %d -> %d\n",i,*(ptr+i));
    }

    free(ptr);


    return 0;
}