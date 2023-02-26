#include<stdio.h>
#include<string.h>

int main(){
    char s[103];
    int i;

    fgets(s, sizeof(s), stdin);

    for(i=0; i<strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
        if(!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')){
            if(i == (strlen(s)-1)){
                printf("%c", s[i]);
            }else{
                printf(".%c", s[i]);
            }
        }
    }


    return 0;
}