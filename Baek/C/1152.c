#include <stdio.h>
#include <string.h>

int main(){
    char buf[1000002];
    scanf("%[^\n]", buf);

    buf[strlen(buf)] = ' ';
    int cnt = 0;
    for (int i=1; i<strlen(buf); i++) {
        if (buf[i] == ' ' && buf[i-1] != ' ')
            cnt++;
    }

    printf("%d\n", cnt);
}