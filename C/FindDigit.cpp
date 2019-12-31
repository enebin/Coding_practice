#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findDigits(int n) {
    char buf[1000000000] ={10, };
    int len;
    len = sprintf(buf, "%d", n);

    int i = 0;
    int count = 0;
    while (buf[i] != 10){
        if (n % (buf[i] - 48) == 0){
            count += 1;
            printf("%d", buf[i]);
        }
        else if (buf[i] - 48 == 0){
            i++;
            continue;
       }
        else{
            i++;    
            continue;  
        }      
    }
    return count;
}


int main()
{
    printf("%d", findDigits(1255));
    return 0;
}