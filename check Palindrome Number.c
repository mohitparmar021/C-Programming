#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,temp,r,rev=0;
   printf("Enter a Number ");
   scanf("%d",&n);

   temp=n;
   while(temp>0)
   {
       r=temp%10;
       rev=(rev*10)+r;
       temp=temp/10;
   }

   if(n==rev)
   {
       printf("Yes, It is a Palindrome Number");
   }
   else
   {
        printf("No, It is not a Palindrome Number");
   }

    return 0;
}
