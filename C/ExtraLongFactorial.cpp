#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void extraLongFactorials(int n) {
    typedef unsigned long long sup;

    sup fact = n;

    for (int i=1; i < n; i++){
        fact *= n - i;
    }

    printf("%llu\n", fact);
    printf("%llu\n", ULLONG_MAX);

    return; 
}


int main()
{
    extraLongFactorials(25);
    return 0;
}