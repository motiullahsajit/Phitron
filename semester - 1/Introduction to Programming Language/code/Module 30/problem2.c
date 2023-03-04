#include<stdio.h>
#include<math.h>

struct Point
{
    float x,y;    
};

struct Point mid(struct Point m,struct Point n){
    struct Point ans;
    ans.x = (m.x+n.x)/2;
    ans.y = (m.y+n.y)/2;
    return ans;
}

int main(){

    struct Point p1 ={1,1}, p2={4,5},p3;
    p3 = mid(p1,p2);

    printf("%.2f, %.2f\n", p3.x, p3.y);
    
    return 0;
}