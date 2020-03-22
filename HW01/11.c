/*Напишите функцию, возвращающую "удвоенную" строку: f("abc") должна вернуть "abcabc".
Функция должна выделить необходимое количество памяти и вернуть char *, строка-аргумент не изменяется.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* twix(char* str) {
    int len = strlen(str);
    char* n = malloc(2*len);
    int i = 0;
    while (i < len){
        n[i] = str[i];
        n[i+len]= str[i];
        i++;

    }
    n[2*len] = 0;
    return n;
}


int main()
{
    char s[] = "abc";
    printf("%s\n",twix(s));
    return 0;
}
