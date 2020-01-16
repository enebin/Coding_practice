#include <stdio.h>
#include <stdlib.h>

enum command {L = 0, D, B, P};
char buf[100000];

int hasta(char x){
    if (x == 'P')
        return P;
    else if (x == 'B')
        return B;
    else if (x == 'D')
        return D;
    else
        return L;
}

int main()
{
    scanf("%s", buf);

    int iter;
    scanf("%d", &iter);

    enum command com;
    
    int cursor = 0;
    for (int i=0; i<3; i++){
        com = hasta(getchar());

        switch (com)
        {
        case L:
            if (cursor == 0)
                continue;
            else
                cursor--;
            break;

        case D:
            if (cursor)        
        default:
            break;
        }
    }

    return 0;
}