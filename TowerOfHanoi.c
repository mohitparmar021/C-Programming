#include <stdio.h>
#include <stdlib.h>

void towerOfHanoi(int n,int a,int b,int c)
{
    if(n>0)
    {
        towerOfHanoi(n-1,a,c,b);
        printf("(%d,%d)  ",a,c);
        towerOfHanoi(n-1,b,a,c);
    }
}

int main()
{
    int n=3;
    int a=1, b=2, c=3;
    towerOfHanoi(3,1,2,3);

    return 0;
}
