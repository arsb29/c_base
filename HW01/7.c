/*����������, �������� �� ������ ������ a ������������, �� ���� ����� �� ����� ���� ��������� ������� � ���������� ��������, ������� � �������������� � �.�.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4 /* ���������� ��������� ������� */

int main()
{
  int a[N]; /* ������ a ������� N */
  int i;    /* ������� */
  srand(time(NULL)); /* ��������� �������� ���������� ��� */

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
