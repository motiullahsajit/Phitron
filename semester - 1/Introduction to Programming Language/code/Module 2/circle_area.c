#include<stdio.h>

// A program to find out the area of a circle

int main(){

    float radius, area;

    printf("Please enter the radius of the circle: ");
    scanf("%f",&radius);

    area = 3.1416 * (radius * radius);

    printf("The area of the circle is : %.2f", area);

    return 0;
}
