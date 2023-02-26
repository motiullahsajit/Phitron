#include<stdio.h>

int gcd(int x, int y){
    int l, s;

    if(x >y){
        l = x;
        s = y;
    }else{
        l = y;
        s = x;
    }


    for(int i = s; i >=1;i--){
        if(x%i == 0 && y%i == 0){
            return i;
        }
    }
}

// int lcm(int x, int y){
//     for(int i = x; i <=(x*y); i++){
//         if(i%x == 0 && i%y == 0){
//             return i;
//         }
//     }
// }


int lcm(int x, int y){
    return ((x*y)/gcd(x,y));
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);

    printf("GCD = %d\n",gcd(x,y));
    printf("LCM = %d\n",lcm(x,y));
}