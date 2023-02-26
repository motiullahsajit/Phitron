#include<stdio.h>
#include<string.h>

int main(){
    char name[100];
    int n;
    scanf("%d",&n);

    for(int i=0; i < n; i++){

        scanf("%s",&name);
        int l = strlen(name);        

        if(l>10){
            printf("%c%d%c\n",name[0],l-2,name[l-1]);
        }else{
            puts(name);
            printf("\n");
        }

    }
 

    return 0;
} 
