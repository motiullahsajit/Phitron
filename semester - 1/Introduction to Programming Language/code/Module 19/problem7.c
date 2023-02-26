#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[22];
        scanf("%s",a);
        bool isPalindrome=true;
        int n=strlen(a);
        int i=0,j=n-1;
        while(i<j)
        {
            if(a[i] != a[j])
            {
                isPalindrome=false;
                break;
            }
            i++;
            j--;
        }
        if(!isPalindrome)
        {
            printf("Case #1: Not Palindrome\n");
        }
        else
        {
            if(n>7)
            {
                printf("Case #2: %c%d%c\n",a[0],n-2,a[n-1]);
            }
            else
                printf("Case #3: %s\n",a);
        }
    }
    return 0;
}
