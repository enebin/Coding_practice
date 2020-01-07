#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findDigits(int n) {
    int i = 1;
    int count = 0;

   while (n >= int(pow(10, i-1) + 0.5)){
        int cut = n / int(pow(10, i-1));
        int remain = cut % 10;

        if (!remain){
            i++;
            continue;
        }

        int result = n % remain;

        if (!result){
            count += 1;
            i++;
        }
        else {
            i++;
        }
    }
    return count;
}


int main()
{
    printf("%d\n", findDigits(106108048));
    return 0;
}