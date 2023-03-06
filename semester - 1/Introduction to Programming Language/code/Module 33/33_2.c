#include<stdio.h>

int main(){

    FILE *inputFile = fopen("input.txt", "r");

    // while (1)
    // {
    //     char ch = fgetc(inputFile);
    //     if(ch == EOF) break;
    //     printf("%c", ch);
    // }

    FILE *outputFile = fopen("output2.txt", "w");

    while (1)
    {
        char ch = fgetc(inputFile);
        if(ch == EOF) break;
        fputc(ch, outputFile);
    }    

    return 0;
}