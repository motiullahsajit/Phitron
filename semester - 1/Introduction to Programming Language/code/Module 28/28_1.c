#include<stdio.h>

void func(int x, int y, int *l, int *s) {
    *l = x > y ? x : y;
    *s = x < y ? x : y;
}

int main(){

    int a = 15, b = 29;
    int large, small;

    func(a, b, &large, &small);

    printf("large: %d, small: %d\n", large, small);

    return 0;
}