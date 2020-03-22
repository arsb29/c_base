/*Вычислить сумму элементов массива находящихся между минимальным и максимальным элементами.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */
#define M 10

int main()
{
  int a[N]; /* массив a размера N */
  int i;    /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */

  int max = 0;
  int ma, mi;
  int min = M;
  int k = 0;

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
  int v, v1;
  if (mi < ma) {v = mi; v1 = ma;}
  else {v = ma; v1 = mi;}

  for (i = v + 1; i < ma; i++) k = k + a[i];
  printf("\n");
  printf("%d\n", k);

  return 0;
}
