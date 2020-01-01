#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void extraLongFactorials(int n) {
    int temp[100] = {0, };
    temp[0] = n;
    
    int j = 1;

    for (int i=1; i < n; i++){
        for (int pos = 0; pos < j; pos++){
            temp[pos] *= n - i;
            int debug = temp[pos];
            int debug_2 = temp[pos+1];
            int debug_3 = temp[pos+2];

            if (temp[pos] >= 10000){
                temp[pos + 1] += temp[pos] / 10000;
                temp[pos] = temp[pos] % 10000;

                debug = temp[pos];
                debug_2 = temp[pos+1];
                debug_3 = temp[pos+2];
                j++;
            }
        }
    }
    for (int count=0; count<j; count++)
        printf("%d", temp[count]);

    return;
}



int main()
{
    extraLongFactorials(10);
    return 0;
}