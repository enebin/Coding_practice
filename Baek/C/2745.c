#include <stdio.h>
#include <string.h>
#include <math.h>

typedef long long int lld;

char* str;
int mode;

int main()
{
    int iter;
    scanf("%s", str);
    scanf("%d", mode);

    lld len = strlen(str);
    lld res = 0;

    for(lld i=0; i<len; i++){
        int num = str[i];
        printf("%c ", str[i]);

        if (num >= 'A')
            res += (num - 'A' + 1) * pow(mode, len - i - 1);
        else
            res += (num - '0') * pow(mode, len - i - 1);
    }

    //printf("%lld\n", res);

    return 0;
}