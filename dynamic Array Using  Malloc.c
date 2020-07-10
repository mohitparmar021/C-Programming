#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,n ,sum=0;
  int *A;                 // dynamic array
  printf("Enter Size Of Array");
  scanf("%d",&n);

  A = (int *)malloc(sizeof(int)*n);  // dynamic memory (heap) using malloc Function

   for(int i=0; i<n; i++)
   {
       scanf("%d" ,&A[i]);
       sum=sum+A[i];
   }
  printf("\nSum of Enter Valued : %d\n\n",sum);
  free(A);   // free memory

    return 0;
}
