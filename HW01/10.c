#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int counter(char *str) {
    int i = 0, num = 0;
    while (str[i] != '\0') {
        if ('0' <= str[i] && str[i] <= '9')
            num++;
        i++;
    }
    return num;
}

int main()
{
    char t[] = "daedhg23f6d72rd";
    printf("%d\n", counter(t));
    return 0;
}
