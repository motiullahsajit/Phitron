// #include<stdio.h>
// #include<stdlib.h>

// int main(){

//     int *ptr;
//     int n;
//     scanf("%d",&n);

//     ptr = (int*)malloc(n*sizeof(int));
//     printf("%p\n",ptr);

//     if(ptr == NULL){
//         printf("Memory allocation failed\n");
//     }else{
//         for(int i = 0; i < n; i++){
//             scanf("%d",(ptr+i));
//         }

//         for(int i = 0; i < n; i++){
//             printf("%d ",*(ptr+i));
//         }
//         printf("\n");
//     }

//     int t;
//     scanf("%d",&t);

//     int *ptr2 = realloc(ptr, t*sizeof(int));
//     printf("%p\n",ptr2);
    
//     if(ptr2 == NULL){
//         printf("Memory allocation failed\n");
//     }else{
//         for(int i = n; i < n+t; i++){
//             scanf("%d",(ptr2+i));
//         }

//         for(int i = n; i < n+t; i++){
//             printf("%d ",*(ptr2+i));
//         }
//         printf("\n");
//     }

//     free(ptr2);

// }

#include <stdio.h>
#include <stdlib.h>
int main()
{
  
  int* ptr;
  ptr = (int*) malloc(1*sizeof(int));
  printf("%d",*ptr);
  return 0;
}