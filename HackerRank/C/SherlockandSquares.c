#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int squares(int a, int b) {
    int i = 1;
    int count = 0;
    while (pow(i, 2) <= b){
        if (pow(i, 2) >= a)
            count++;            
        i++;
    }
    return count;
}


int main()
{
    printf("%d", squares(3, 9));
    return 0;
}