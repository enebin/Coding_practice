#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findDigits(int n) {
    int i = 1;
    int count = 0;

    while (n > int(pow(10, i-1) + 0.5)){
        int remain = (n % int(pow(10, i) + 0.5)) / int(pow(10, i-1) + 0.5);

        if (!remain){
            i++;
            continue;
        }

        int result = n % remain;

        if (!result){
            count += 1;
            i++;
        }
    }

    return count;
}


int main()
{
    printf("%d\n", findDigits(1061));
    return 0;
}