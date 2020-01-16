#include <stdio.h>
#include <string.h>

char res[1001][1001];

int comp(const void* a, const void* b){
    char* c1 = (char*) a;
    char* c2 = (char*) b;

    int diff = strcmp(c1, c2);
    
    if (diff)
        return diff;
}

int main()
{
    char str[1001];
    gets(str);

    int len = strlen(str);

    for (int i=0; i<len; i++){
        for (int j=i; j<=len; j++){
            res[i][j-i] = str[j];
        }
    }

    qsort(res, len, 1001*sizeof(char), comp);

    for (int i=0; i<len; i++)
        printf("%s\n", res[i]);

    return 0;
}