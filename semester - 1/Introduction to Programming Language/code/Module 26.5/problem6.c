#include<stdio.h>
#include<string.h>

int main(){

    char text[1024];
    scanf("%s",text);

    int len = strlen(text);

    for(int i = 0; i < len; i++){
        if(text[i] %2 == 0){
            text[i] -= 32;
        }
    }

    printf("%s\n",text);



    return 0;
}