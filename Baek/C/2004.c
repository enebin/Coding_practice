#include <stdio.h>

int main()
{
    int iter;
    scanf("%d", &iter);
    
    int res = 1;
    int count = 0;
    for (int i=1; i<=iter; i++){
        res *= i;
        while (res % 10 == 0){
            count++;
            res /= 10;
        }
        res %= 1000;
    }


    printf("%d\n", count);

    return 0;
}