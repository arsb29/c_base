/*Напишите функцию, возвращающую строку "склеенную", из двух строк: f("ab", "cd") должна вернуть "abcd".
Функция должна выделить необходимое количество памяти и вернуть char *, строки-аргументы не изменяется.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* ss(char* x, char* y) {
    int i = 0, j = 0;
    int lenx = strlen(x);
    int leny = strlen(y);
    char* n = malloc(lenx + leny);
    while (i < lenx){
        n[i] = x[i];
        i++;
    }
    while (j < leny){
        n[lenx+j] = y[j];
        j++;
    }
    n[lenx + leny] = 0;
    return n;
}

int main()
{
    char x[] = "ab";
    char y[]= "cd";
    printf("%s", ss(x, y));
    return 0;
}
