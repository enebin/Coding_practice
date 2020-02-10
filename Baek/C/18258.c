#include <stdio.h>
#include <string.h>

int q[2000001] = {0, };
int frontt = 0;
int rearr = 0;

enum command {push, pop, size, empty, front, back};

int i_handler(const char* c){
    enum command com;

    if (!strcmp(c, "push"))
        return push;
    else if (!strcmp(c, "pop"))
        return pop;
    else if (!strcmp(c, "size"))
        return size;
    else if (!strcmp(c, "empty"))
        return empty;
    else if (!strcmp(c, "front"))
        return front;
    else
        return back;
}

int main(){
    int iter;
    scanf("%d", &iter);

    while(iter--){
        char c[6];
        scanf("%s", c);
        
        switch (i_handler(c)){
            case push:
                scanf("%d", &q[rearr++]);
                /*for (int i=0; i<10; i++)
                    printf("%d ", q[i]);*/
                break;
            case pop:
                if ((rearr - frontt) != 0)
                    printf("%d\n", q[frontt++]);
                else
                    printf("-1\n");
                break;
            case size:
                printf("%d\n", rearr - frontt);
                break;
            case empty:
                printf("%d\n", rearr - frontt > 0 ? 0 : 1);
                break;
            case front:
                if ((rearr - frontt) != 0)
                    printf("%d\n", q[frontt]);
                else 
                    printf("-1\n");
                break;
            case back:
                if ((rearr - frontt) != 0)
                    printf("%d\n", q[rearr-1]);
                else 
                    printf("-1\n");
                break;
            
            default:
                break;
        }

    }
}