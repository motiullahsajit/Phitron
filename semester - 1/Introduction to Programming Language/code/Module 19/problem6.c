#include <stdio.h>

int main() {
    
  int plus=1, minus=1, maxplus=0,maxminus=0, n;
  
     scanf("%d", &n);
     char s[n];
     scanf("%s", &s);
     
    for (int i = 0; i<n; i++) {
         plus=1, minus=1;
        
        while (s[i] =='+' && s[i] == s[i + 1]) {
            i++;
            plus++;
        }
        if(plus>=maxplus){
            maxplus = plus;
        }
        while (s[i] =='-' && s[i] == s[i + 1]) {
            i++;
            minus++;
        }
        if(minus>=maxminus){
            maxminus = minus;
        }
    }
       if(maxplus>maxminus){
           printf("%d\n", maxplus);
           return 0;
       }
       printf("%d\n", maxminus);

    return 0;
}
