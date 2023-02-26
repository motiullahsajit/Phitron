#include<stdio.h>

int is_vowel(char c){
    if(c=='a'||c=='e'||c=='o'||c=='i'||c=='u')
        return 1;
    else return 0;
}

int main(){

    char ch;
    ch = getchar();
    getchar();

    if(is_vowel(ch))
        printf("%c is a vowel\n", ch);
    else printf("%c is consonant\n", ch);

    return 0;
}