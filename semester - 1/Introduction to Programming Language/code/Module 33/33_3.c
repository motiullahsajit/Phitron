#include<stdio.h>

int main(){

    FILE *inputfile = fopen("input3.txt", "r");
    FILE *outputfile = fopen("output3.txt", "w");
    
    if(inputfile==NULL){
        fprintf(outputfile,"File not found");
        return 0;
    }

    int n,x, sum = 0;
    fscanf(inputfile,"%d",&n);

    for(int i=0; i<n; i++){
        fscanf(inputfile,"%d",&x);
        sum += x;
    }

    fprintf(outputfile,"Sum = %d\n",sum);

    return 0;
}