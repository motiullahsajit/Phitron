#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, t,x,per;

    scanf("%d",&t);

    for(i=0;i<t;i++) {
        scanf("%d%c",&x,&per);
        if(x <=60){
            printf("%d minutes\n", 60-x + 100);
        }else if(x >= 60 && x <= 80){
            printf("%d minutes\n", ((80-x)*2) + 60);
        }else if(x >= 80 && x <=100){
            printf("%d minutes\n", ((100-x)*3));
        }
    }

    return 0;
}
