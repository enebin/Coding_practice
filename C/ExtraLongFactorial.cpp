#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void extraLongFactorials(int n) {
    typedef short sup;
    sup temp[100];
    temp[0] = n;
    
    int j = 1;

    for (int i=1; i < n; i++){
        for (int pos = 0; pos < j; pos++){
            temp[pos] *= n - i;
            sup debug = temp[pos];

            if (temp[pos] >= 10000){
                temp[pos + 1] += temp[pos] / 10000;
                j++;
            }
        }
    }
    for (int count=0; count<j; count++)
        printf("%d\n", temp[count]);

    return;
}



int main()
{
    extraLongFactorials(10);
    return 0;
}