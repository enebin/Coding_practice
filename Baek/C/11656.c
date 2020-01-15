#include <stdio.h>
#include <string.h>

int comp(const void* a, const void* b){
    char* n1
}

int main()
{
    char str[1000];
    char lux[1000][2];
    gets(str);

    int len = strlen(str);
    for(int i=0; i<len; i++){
        for (int j=i; j<len; j++){
            lux[j][i] = str[j];
        }
    }

    return 0;
}