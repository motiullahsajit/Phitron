#include<stdio.h>

int main(){

    FILE *inputfile = fopen("noinput.txt", "r");
    FILE *logfile = fopen("log.txt", "a");

    if(inputfile == NULL){
        fprintf(logfile, "Input file not found at 09:20 am\n");
    }


    return 0;
}