/*Determine the maximum number of identical array elements.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
  int a[N];
  int i, j;
  srand(time(NULL));
  int m;
  int k = 0;

  for(i = 0; i < N; i++){
    a[i] = rand()%4;
    printf("%d\n", a[i]);
  }

  for (i = 0; i < N-1; i++) {
    m = 1;
    for (j = i+1; j < N; j++){
        if (a[i] == a[j]) {
            m++;
        }
    if (m > k) k = m;
    }
  }

   printf("\n");
   printf("%d\n", k);

  return 0;
}
