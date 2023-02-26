#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=0,odds_count=0,evens_count=0;
    scanf("%d",&n);
    int numbers[n];

    for(int i=0;i<n;i++){
        scanf("%d",&numbers[i]);
        if(numbers[i]%2==0){
            evens_count++;
        }else{
            odds_count++;
        }
    }

    
    int evens[evens_count];
    int evens_arr_index =0;
    for(int i=0;i<n;i++){
        if(numbers[i]%2==0){
            evens[evens_arr_index]= numbers[i];
            evens_arr_index++;
        }

    }

    int odds[odds_count];
    int odds_arr_index =0;
    for(int i=0;i<n;i++){
        if(numbers[i]%2!=0){
            odds[odds_arr_index]= numbers[i];
            odds_arr_index++;
        }

    }
    int even_temp;
    for(int i=0; i<evens_count; i++){
        for(int j=0; j<evens_count; j++){
            if(evens[i]>evens[j]){
                even_temp = evens[i];
                evens[i]=evens[j];
                evens[j]=even_temp;
            }
        }
    }
    int odd_temp;
    for(int i=0; i<odds_count; i++){
        for(int j=0; j<odds_count; j++){
            if(odds[i]>odds[j]){
                odd_temp = odds[i];
                odds[i]=odds[j];
                odds[j]=odd_temp;
            }
        }
    }
    if(odds_count==0 && evens_count <2){
        printf("%d\n",evens[0]);
    }else if(odds_count==0 && evens_count>2){
        printf("%d\n",evens[0]+evens[1]);
    }
    else if((evens[0]+evens[1]) > ((odds[0]+odds[1]))){
        printf("%d\n",evens[0]+evens[1]);
    }else if((evens[0]+evens[1])<((odds[0]+odds[1]))){
        printf("%d\n",odds[0]+odds[1]);
    }
    

    return 0;
}
