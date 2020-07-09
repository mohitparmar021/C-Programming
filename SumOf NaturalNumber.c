#include <stdio.h>
#include <stdlib.h>

int sumNaturalNumber(int x)
{
	if (x==0)
	{
		return 0;
	}
	else
	{
		return sumNaturalNumber(x-1) + x;
	}
}

int main()
{

// Sum of Natural Number : 1 + 2 + 3 + 4 + 5 + 6 + 7 + ...... + (n-1) + n

  int n=10;
  printf("%d  ", sumNaturalNumber(n));

	return 0;
}