#include <stdio.h>
#include <stdlib.h>


int powerFirstMethod(int m,int n)   // First Method to find Exponent Value or Power. More Multiplication is performed.
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return powerFirstMethod(m, n-1)*m;   // calling recurively function 
	}
}

int powerSecondMethod(int m,int n)  // Second Method to find Power / Exponent, less multiplication is performed.
{
	if (n==0)
	{
		return 0;
	}

	if(n%2==0)      // when n is Even      
		return powerSecondMethod(m*m, n/2);
	else
		return  m*powerSecondMethod(m*m, (n-1)/2);
}

int int main()
{
	int m=2;
	int n=5;
	printf("%d \n", powerFirstMethod(m,n));   // calling first method and printing output for first method 

    printf("%d ", powerSecondMethod(m,n));    // calling second method and printing output for second method

	return 0;
}