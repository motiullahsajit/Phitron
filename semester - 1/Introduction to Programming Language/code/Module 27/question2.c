#include<stdio.h>
#include<string.h>


int main(){

    char text[1024];
    scanf("%s",text);

    int len = strlen(text);
    char temp;
    for(int i = 0; i < len; i++){
        for(int j = i+1; j < len; j++){
            if(text[i] < text[j]){
                temp = text[i];
                text[i] = text[j];
                text[j] = temp;
            }
        }
    }

    printf("%s\n",text);
    
    return 0;
}