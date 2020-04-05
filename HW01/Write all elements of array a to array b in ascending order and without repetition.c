/*Let there be an array a of real numbers of size n. Write all elements of array a to array b in ascending order and without repetition.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
  int i, j;
  double a[N] = {1,2,2,4,5,1,7,8,9,9};
  int s = 0;

  for (i = 0; i < N; i++) for (j = i+1; j < N; j++) if (a[i]==a[j]) s++;

  int b[N-s];

  int min = a[1];

  for (i = 0; i < N; i++) if (a[i]<min) min = a[i];
  b[0] = min;

  for (j=1;j<N-s;j++){
      min = 99999;
    for (i = 0; i < N; i++) {
      if (a[i] < min && a[i] > b[j-1]) min = a[i];
    }
    b[j] = min;
  }

  for (i=0;i<N-s;i++) printf("%d ", b[i]);

  return 0;
}
