/*Given two sorted in ascending order an array of integers a and b.
Find the number of different numbers that are present in both array a and array b.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int i = 0;
  int a[] = {1, 2, 3, 5, 6, 6, 7, 8, 8, 8};
  int b[] = {1, 2, 3, 4, 4, 5, 6, 7, 8, 9};
  int k = sizeof(a)/sizeof(int) + sizeof(b)/sizeof(int);
  int c[k];
  c[0] = a[1];
  int top = 1;
  int flag;
  int j;

  for (i = 0; i < sizeof(a)/sizeof(int); i++) {
        flag = 0;
        for (j = 0; j < top; j++) {
            if (a[i] == c[j]) flag = 1;
        }
        if (flag == 0) {c[top] = a[i]; top++;}
  }

    for (i = 0; i < sizeof(b)/sizeof(int); i++) {
        flag = 0;
        for (j = 0; j < top; j++) {
            if (b[i] == c[j]) flag = 1;
        }
        if (flag == 0) {c[top] = b[i]; top++;}
  }
  printf("%d\n", top);

  return 0;
}
