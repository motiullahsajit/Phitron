#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    int op1=0,op2=0;
    int evenCount=2,oddCount=2;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]%2==0 && evenCount>0)
        {
            evenCount--;
            op1+=a[i];
        }
        if(a[i]%2==1 && oddCount>0)
        {
            oddCount--;
            op2+=a[i];
        }
    }
    if(oddCount>0) printf("%d\n",op1);
    else 
    {
        (op1>op2)? printf("%d\n",op1) : printf("%d\n",op2);
    }
    return 0;
}





