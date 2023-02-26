#include<stdio.h>
#include<string.h>

int is_binary(char str[]);

int main(){
    char str[10];
    gets(str);
    
    if(is_binary(str))
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}

int is_binary(char str[]){
    int len = strlen(str);
    
    for(int i=0; i<len; i++){
        if(str[i] != '0' && str[i] != '1'){
            return 0;
        }
    }
    return 1;
}