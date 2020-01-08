#include <stdio.h>
#include <stdlib.h>

int main()
{
    int string; 
    scanf("%d\n", &string);

    int sum = 0;

    while(string--){
        int temp = getchar();
        sum += (temp - 48);
    }

    printf("%d\n", sum);
    return 0;
}