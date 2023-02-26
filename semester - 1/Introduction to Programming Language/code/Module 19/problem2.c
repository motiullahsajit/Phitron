#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[20];
    gets(s);
    int a, b,sum=0;
    scanf("%d %d", &a, &b);

    int len = strlen(s);

    for(int i = 0; i < len; i++){
        if(s[i] == '+'){
            sum += a+b;
        }else{
            sum += a*b;
        }
    }
    printf("%d\n",sum);
    return 0;
}
