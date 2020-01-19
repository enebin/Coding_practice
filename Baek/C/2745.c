#include <stdio.h>
#include <string.h>
#include <math.h>

typedef long long int lld;

char str[100];
int mode;

int main()
{
    scanf("%s %d", str, &mode);

    lld len = strlen(str);
    lld res = 0;

    for(lld i=0; i<len; i++){
        int num = str[i];

        if (num >= 'A')
            res += (10 + num - 'A') * (lld)(pow(mode, len - i - 1) + 0.5);
        else
            res += (num - '0') * (lld)(pow(mode, len - i - 1) + 0.5);
    }

    printf("%lld\n", res);

    return 0;
}