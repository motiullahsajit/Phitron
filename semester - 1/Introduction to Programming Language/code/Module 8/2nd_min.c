#include<stdio.h>

int main(){
    
    int ara[10]={10,9,8,7,6,5,4,3,12,11};
    int temp;
    // for(int i=0; i<10;i++){
    //     scanf("%d", &ara[i]);
    // }

    for(int i=0; i<10; i++){

        for (int j = 0; j < 10; j++)
        {
            if(ara[i]>ara[j]){
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }

      
    }


    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",ara[i]);
        
    }
    

}