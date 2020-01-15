#include <stdio.h>
#include <string.h>

char str[101];

char rot13(char s){
    int tar = s + 13;

    if (s>=65 && s<=90){
        if (tar>90)
            tar -= 26;
    }
    else if (s>=97 && s<=122){
        if (tar>122)
            tar -= 26;
    }
    else 
        return s;

    return tar;
}

int main()
{
    while (gets(str)){
        for(int i=0; i<strlen(str); i++){
            printf("%c", rot13(str[i]));
        }
    }

    return 0;
}