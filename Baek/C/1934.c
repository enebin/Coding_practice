#include <stdio.h>
#include <stdlib.h>

int min (int a, int b){
    return a < b ? a : b;
}

int main()
{
    int a, b, min_val, iter;
    scanf("%d", &iter);

    while (iter--){
        scanf("%d %d", &a, &b);

        int iter = min(a, b);

        while (iter){
            if (a % iter == 0 && b % iter == 0){
                min_val = iter;
                break;
            }
            iter--;
        }

        int max_val = a * b / min_val;

        printf("%d\n", max_val);
    }

    return 0;
}