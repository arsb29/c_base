/*Определить, является ли данный массив a симметричным, то есть имеет ли место быть равенство первого и последнего элемента, второго и предпоследнего и т.д.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4 /* количество элементов массива */

int main()
{
  int a[N]; /* массив a размера N */
  int i;    /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */

  int m = 0;

  for(i = 0; i < N; i++){
    a[i] = rand()%2;
    printf("%d\n", a[i]);
  }

  for(i = 0; i < (N / 2); i++) if (a[i] != a[N-(i+1)]) m = 1;

  printf("\n");

  if (m == 0) printf("YES");
  else printf("NO");

  return 0;
}
