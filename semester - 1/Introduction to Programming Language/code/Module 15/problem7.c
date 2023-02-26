#include<stdio.h>
#include<string.h>

int main(){
    char s[100],t[100];
    int i,flag = 0;

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
            flag = -1;
            break;
        }else if(s[i]>t[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("2nd word is before 1st word in lexicographical order\n");
    }else if(flag== -1){
        printf("1st word is before 2nd in lexicographical order\n");
    }else{
        printf("Both words lexicographical order is same.\n");
    }

    return 0;
}
