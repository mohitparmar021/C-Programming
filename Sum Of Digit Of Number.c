#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,remainder,sum=0;
   printf("Enter a Number ");
   scanf("%d",&n);

    while(n>0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("\nSum of Digit : %d\n",sum);


    return 0;
}
