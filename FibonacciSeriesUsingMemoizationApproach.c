#include <stdio.h>
#include <stdlib.h>

int f[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};  // Gobal Array

int fibMemoization(int n)
{
    if(n<=1)
    {
        f[n]=n;
        return n;
    }
    else
    {
        if(f[n-2]==-1)
        {
            f[n-2]=fibMemoization(n-2);
        }
         if(f[n-1]==-1)
        {
            f[n-1]=fibMemoization(n-1);
        }
        return f[n-2]+f[n-1];
    }
}


int main()
{
    int a=7; 
    printf("%d ",fibMemoization(a));
    return 0;
}
