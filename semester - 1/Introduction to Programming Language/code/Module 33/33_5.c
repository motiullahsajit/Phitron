#include<stdio.h>

int main(){
    FILE *inputfile = fopen("input5.txt", "r");
    FILE *outputfile = fopen("output5.txt", "a");

    if(inputfile == NULL){
        fprintf(outputfile, "File not found\n");
    }

    int n;
    fscanf(inputfile, "%d", &n);
    fprintf(outputfile,"%d\n",n);

    fclose(inputfile);
    fclose(outputfile);


    return 0;
}