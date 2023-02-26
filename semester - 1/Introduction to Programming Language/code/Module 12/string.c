#include<stdio.h>

int main(){
    char name[15];
    scanf("%s", name);
    char name2[15] = "Motiullah Sajit";
    printf("My name is %s\n", name);
    name2[4]='i';
    name2[12]='X';
    name2[13]='\0';
    printf("My name is %s\n", name2);
}