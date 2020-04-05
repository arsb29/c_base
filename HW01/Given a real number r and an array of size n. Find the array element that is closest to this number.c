/*Given a real number r and an array of size n. Find the array element that is closest to this number.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
  int a[N];
  int i;
  srand(time(NULL));

  double r = 56.9;

  double min = 100;
  int m;
  double k;

  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    k = abs(a[i] - r);
    if (min > k) {
        min = k;
        m = i;
    }
    printf("%d\n", a[i]);
  }

    printf("r = %f\n", r);
    printf("Number %d\n", a[m]);

  return 0;
}
