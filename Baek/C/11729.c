#include <stdio.h>
#include <stdlib.h>

int pos[3] = {1,2,3};
void hanoi(int a, int b, int c){
    int joker = 6 - b - c;

    if (a > 0){
        hanoi(a-1, b, joker);
        printf("%d %d\n", b, c);
        hanoi(a-1, joker, c);
    }
    else
        return;    
}

int main()
{
    int iter;
    scanf("%d", &iter);

    int count = 1;
    for (int i=1; i<iter; i++){
        count = count*2 + 1;
    }

    printf("%d\n", count);
    hanoi(iter, 1, 3);    

    return 0;
}