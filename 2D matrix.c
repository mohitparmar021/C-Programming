#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   int A[4][4];

   for(i=0; i<4; i++)
   {
       for(j=0; j<4; j++)
       {
           scanf("%d" ,&A[i][j]);
       }
   }

   printf("\n\n");

   for(i=0; i<4; i++)
   {
       for(j=0; j<4; j++)
       {
           printf("%d " ,A[i][j]);
       }
       printf("\n");
   }

    return 0;
}
