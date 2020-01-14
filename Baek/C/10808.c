#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int alp[26] = {0, };

int main()
{
    for (int k=0; k<26; k++){
        alp[k] = -1;
    }

    int i = 0;
    while (1){
        char c = getchar();

        if (c == EOF) 
            break;      

        if (alp[c - 97] < 0)
            alp[c - 97] = i++; 
        else{
            i++;
            continue;
        }
    }

    for (int i=0; i<26; i++){
        printf("%d ", alp[i]);
    }

    return 0;
}