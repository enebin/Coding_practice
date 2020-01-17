#include <stdio.h>
#include <stdlib.h>

int stack[100001];

int pop(int* stack, int cursor, int* size, int k){
    if (cursor + k > size)
    int temp = stack[cursor + k];

    for (int i=cursor; i<*size; i++){
        stack[i] = stack[i+1];
    }

    *size -= 1;

    return temp;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i=1; i<=n; i++){
        stack[i] = i;
    }

    printf("<");

    int temp = n, i = k, tmp2 = stack[i];
    while (temp--){
        printf("%d, ", tmp2);
        tmp2 = pop(stack, i, &n, k);
        i = i + k > n ? i += k - n : i + k;
    }

    printf(">") ;

    return 0;
}