#include<stdio.h>
#include<math.h>
int g = 123;
int main(){
    int x,g=12;
    scanf("%d",&x);
    printf("%d\n",abs(x));
    printf("%f\n",sin(x));
    printf("%d\n",g);
    {
        extern g;
        printf("%d\n",g);
    }
    

    return 0;
}