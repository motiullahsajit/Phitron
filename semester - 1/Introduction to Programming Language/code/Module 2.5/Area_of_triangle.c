#include<stdio.h>
#include <conio.h>  
#include <math.h>  


int main(){

    float base, height, c, s, area;

    printf("Please enter the base: "); 
    scanf("%f",&base);

    printf("Please enter the height: "); 
    scanf("%f",&height);

    printf("Please enter the another side : "); 
    scanf("%f",&c);

    printf("Area using base and height : %.2f\n", (0.5 * base * height)); 

    s = (base + height+ c)/2;
    area = sqrt(s*(s-base)*(s-height)*(s-c));

    printf("Area using 3 sides : %.2f", area); 

    return 0;
}