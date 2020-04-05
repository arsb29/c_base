/*Swap the minimum and maximum elements of the array.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define M 200

int main()
{
  int a[N];
  int i;
  srand(time(NULL));

  int max = 0;
  int ma, mi;
  int min = M;

  for(i = 0; i < N; i++){
    a[i] = rand()%M;
    if (a[i] > max) {
        max = a[i];
        ma = i;
    }
    if (a[i] < min) {
        min = a[i];
        mi = i;
    }
    printf("%d\n", a[i]);
  }

  a[mi] = max;
  a[ma] = min;

  printf("\n");

  for (i = 0; i < N; i++) printf("%d\n", a[i]);

  return 0;
}
