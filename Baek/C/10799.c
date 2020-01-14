#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char n[1000001];
int stack = 0;
int count = 0;

int main()
{
    scanf("%s", n);
    int len = strlen(n);

    for (int i=0; i<len; i++){
        if (n[i] == '(')
            stack++;
        else {
            if (n[i-1] == '('){
                count += --stack;
            }
            else{
                stack--;
                count++;
            }
            
        }
    }

    printf("%d\n", count);
    return 0;
}