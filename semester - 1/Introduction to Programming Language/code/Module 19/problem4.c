#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {    

    int t,n=0,i,j,count=0;
    
    scanf("%d",&t);

    for(i=0;i<t;i++){
        count = 0;
        scanf("%d",&n);
        char binary_arr[n];
        scanf("%s",binary_arr);
        
        for(j=0;j<n;j++){
           if((binary_arr[j]=='0') && (binary_arr[j+1]=='1')){
                count++;
           }else if((binary_arr[j]=='1') && (binary_arr[j+1]=='0')){
                count++;
           }
        }
        printf("%d\n",count);
    }

    return 0;
}
