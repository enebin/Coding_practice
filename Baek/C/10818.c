#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int iter;
    int max = INT_MIN;
    int min = INT_MAX;
    int input;

    scanf("%d", &iter);

    while(iter--){
        scanf("%d", &input);

        if (input > max)
            max = input;
        if (input < min)
            min = input;
    }

    printf("%d %d\n", min, max);
    return 0;
}