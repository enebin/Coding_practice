#include <stdio.h>
#include <stdlib.h>

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int fucking_fee[3] = {15, 500, 10000};
    int pay_this = 0;

    if (y1 > y2){
        pay_this += fucking_fee[2];
        return pay_this;
    } else if (y1 != y2)
        return pay_this;
    if (m1 > m2){
        pay_this += (m1 - m2) * fucking_fee[1];
        return pay_this;
    } else if (m1 != m2)
        return pay_this;
    if (d1 >= d2)
        pay_this += (d1 - d2) * fucking_fee[0];

    return pay_this;
}

int main()
{
    printf("%d", libraryFine(28, 3, 2015, 27, 2, 2015));
}