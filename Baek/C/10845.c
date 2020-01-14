#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int queue[10001] = {0, };

enum command {
    push = 0,
    pop,
    size,
    empty,
    front,
    back
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
    else if (!strcmp(x, "front"))
        return front;
    else
        return back;
}

void pain(int pos){
    if (pos == 1)
        queue[0] = 0;
    else{
        for (int i=0; i<pos-1; i++){
         queue[i] = queue[i+1];
      }    
    }
    

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
                queue[j++] = order;
                break;
            
            case pop:
                if (j == 0)
                    printf("%d\n", -1);
                else {
                    printf("%d\n", queue[0]);
                    pain(j);
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
            
            case front:
                if (j == 0)
                    printf("%d\n", -1);
                else
                    printf("%d\n", queue[0]);
                break;

            case back:
                if (j == 0)
                    printf("%d\n", -1);
                else
                    printf("%d\n", queue[j-1]);
                break;

            default:
                break;
        }
    }
    return 0;
}