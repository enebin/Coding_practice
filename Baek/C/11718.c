#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string;

    while(scanf("%c", &string) != EOF)
        printf("%c", string);

    return 0;
}