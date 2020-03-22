/*Реализовать функцию int fatoi (const char *str) для приведения (конвертации) строки в числовой вид.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fatoi(char *str) {
    int total = 0, i, k = 1;
    for (i = strlen(str)-1; i >= 0; i--){
        if ((int)str[i] < 48 || (int)str[i] > 57) return -1;
        else {
            total = total + ((int)str[i] - 48) * k;
            k *= 10;
        }
    }
    return total;
}


int main()
{
    char *s = malloc(360*sizeof(char));
    scanf("%s",s);
    printf("%d",fatoi(s));
    return 0;
}
