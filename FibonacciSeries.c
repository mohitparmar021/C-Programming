#include <stdio.h>
#include <stdlib.h>

int fibnoacci(int n)    // fibonacci using recursion.
{
	if(n<=1)
		return n;
	else
		return fibnoacci(n-2) + fibnoacci(n-1);
}

int fib(int n)    // fibonacci using iterative method
{
	int i;
	int first=0;
	int second=1;
	int sum=0;

	if (n<=1)
	{
		return n;
	}
	for (i=2; i<=n; i++)
	{
		sum = first + second;
		first = second;
		second = sum;
	}
	return sum;
}

void fibno(int n)    // for printing a series of Fibonacci for n 
{
    int n1 = 0, n2 = 1, i,sum;

    if (n < 1)
     {
     	printf("%d ", n1);
     }   

    for (i = 1; i<=n; i++)
    {
        printf("%d ", n2);
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
}


int main()
{
   int a=10;
   printf("%d \n", fibnoacci(a));  //  Recursion Method   Output : 55
  
   printf("%d \n", fib(a));    // Iterative method   Output : 55

   fibno(10);   // for printing a series of Fibonacci for n . Output : 1 1 2 3 5 8 13 21 34 55 
  
	return 0;
}
