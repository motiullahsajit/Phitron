#include<stdio.h>
#include<math.h>

struct Point{
    int x, y;
};

double distance (struct Point p, struct Point q){
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}

int main(){

    struct Point p,q;

    scanf("%d %d",&p.x, &p.y);
    scanf("%d %d",&q.x, &q.y);

    printf("Distance = %.2lf\n", distance(p,q));

    
    return 0;
}