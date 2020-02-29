#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5
int main()
{
   int a[N][M];
   for (int i = 0; i < N; i++)
   {
       for (int j = 0; j < M; j++)
       {
           a[i][j] = ( ((i == 0)  | (i == 4)) | ((j == 0) | (j == 4)) ) ? 1 : 0;
           printf("%d ", a[i][j]);
       }
      printf("\n");
   }
   for (int i = 0; i < N; i++)
   {
       for (int j = 0; j < M; j++)
       {
           if (a[i][j] == 0)
           a[i][j] = (rand()%2);
       }
      printf("\n");
   }
   for (int i = 0; i < N; i++)
   {
       for (int j = 0; j < M; j++)
       {
           printf("%d ", a[i][j]);
       }
      printf("\n");
   }
   getchar();
   return 0;
}
