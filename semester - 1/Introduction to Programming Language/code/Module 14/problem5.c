#include<stdio.h>
#include<string.h>

int main(){
    char s[103],t[103];
    int i,same =1;

    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(s), stdin);

    for(i=0; i<strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
        if(t[i] >= 'A' && t[i] <= 'Z'){
            t[i] += 32;
        }
        if(s[i]<t[i]){
            same = 0;
            printf("-1\n");
            break;
        }else if(s[i]>t[i]){
            same = 0;
            printf("1\n");
            break;
        }
    }

    if(same){
        printf("0\n");
    }

    return 0;
}