#include<stdio.h>

int main(){
    char sentence[1000];

    fgets(sentence,sizeof(sentence),stdin);

    int i =0,count = 0;

    while(sentence[i]!='\0'){
        if( sentence[i]== 'a' || sentence[i]== 'e' || sentence[i]== 'i' || sentence[i]== 'o' || sentence[i]== 'u'){
            count++;
        }
        i++;
    }

    printf("Number of vowel: %d\n", count);

    return 0;
}