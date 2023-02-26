#include<stdio.h>

int main(){

    int n, left_packets,sum;
    printf("Enter number of chocolates: ");
    scanf("%d",&n);
    sum = n;
    left_packets = n;

    while(left_packets >=4){
        sum += left_packets/4;
        left_packets = left_packets % 4 + left_packets /4;     
    }

    printf("Total number of chocolates: %d\n",sum);
    printf("Left packets: %d\n",left_packets);

    return 0;
}