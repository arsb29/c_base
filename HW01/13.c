/*Реализуйте функцию, которая принимает параметром строку и символ и возвращает
адрес первого вхождения этого символа в строку. char *str_chr (char *s, char c)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_chr(char *s, char c) {
    int i = 0;
    while (s[i] != c && s[i] != 0) i++;
    if (i == strlen(s)) return -1;
    else return i+1;
}


int main()
{
    char x[] = "qwerty", y = 'u';
    printf("%d", str_chr(x, y));
    return 0;
}
