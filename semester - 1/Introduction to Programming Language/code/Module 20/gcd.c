#include<stdio.h>

int gcd(int x, int y){
    int i;
    if(x<y){
        for(i=x; x>=1;i--){
            if(x%i==0 && y%i==0){
                return i;
            }
        }
    }else{
         for(i=y; y>=1;i--){
            if(x%i==0 && y%i==0){
                return i;
            }
        }
    }
}

int main(){
    int a,b,ans;
    scanf("%d %d",&a,&b);

    ans = gcd(a,b);
    printf("GCD: %d\n",ans);
}