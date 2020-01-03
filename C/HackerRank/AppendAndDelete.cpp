#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* appendAndDelete(char* s, char* t, int k) {
    int s_count[26] = {0};
    int t_count[26] = {0};
    int result = 0;

    for (int j=0; j<strlen(s); j++){
        for (int i=97; i<=122; i++){
            if (s[j] == i)
                s_count[i-97] += 1;
        }
    }
    
    for (int j=0; j<strlen(t); j++){
        for (int i=97; i<=122; i++){
            if (t[j] == i)
                t_count[i-97] += 1;
        }
    }

    for (int j=0; j<26; j++){
        //printf("%d, %d, %c, %d\n",  s_count[j], t_count[j], j+97, j);
        result += abs(s_count[j] - t_count[j]);
    }

    if (result > k)
        printf("%s", "No");
    else
        printf("%s", "Yes");
}


int main()
{
    char c1[10] = "ash";
    char c2[10] = "ashley";
    appendAndDelete(c1, c2, 2);
    return 0;
}