#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stack[10001] = {0, };

enum command {
    push = 0,
    pop,
    size,
    empty,
    top
};

int believer(char* x){
    enum command com;

    if (!strcmp(x, "push"))
        return push;
    else if (!strcmp(x, "pop"))
        return pop;
    else if (!strcmp(x, "size"))
        return size;
    else if (!strcmp(x, "empty"))
        return empty;
    else 
        return top;
}

int main()
{
    enum command com;

    int iter, order;
    scanf("%d", &iter);

    int j = 0;
    for(int i=0; i<iter; i++){
        char buf[6];
        scanf("%s", buf);
        com = believer(buf);

        switch (com) {
            case push:
                scanf("%d", &order);
                stack[j++] = order;
                break;
            
            case pop:
                if (j == 0)
                    printf("%d\n", -1);
                else {
                    printf("%d\n", stack[j-1]);
                    j--;
                }
                break;

            case size:
                printf("%d\n", j);
                break;
            
            case empty:
                if (j == 0)
                    printf("%d\n", 1);
                else
                    printf("%d\n", 0);
                break;
            
            case top:
                if (j == 0)
                    printf("%d\n", -1);
                else
                    printf("%d\n", stack[j-1]);
                break;

            default:
                break;
        }
    }
    return 0;
}