#include<stdio.h>

int get_count(int n){
    int x,count = 0;
    
    for(int i=0; i<n; i++){
        scanf("%d",&x);
        if(x%3 == 0 && x%5 == 0) count++;
        else if(x%5 == 0 && x%3 != 0) count++;
        else if(x%5 != 0 && x%3 == 0) count++;
    }

    if(count == 0)
        return -1;
    else
        return count;
}

int main(){

    int n;
    scanf("%d",&n);

    printf("%d\n",get_count(n));
    
    return 0;
}