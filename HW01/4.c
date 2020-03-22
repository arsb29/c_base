/*Определить, является ли массив упорядоченным по возрастанию.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
  int a[N]; /* массив a размера N */
  int i;    /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */

  int m = 0;

  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d\n", a[i]);
  }

  for(i = 1; i < N; i++){
    if (a[i-1] > a[i]) {
        m = 1;
    }
  }

  printf("\n");

  if (m == 0) printf("YES");
  else printf("NO");

  return 0;
}
