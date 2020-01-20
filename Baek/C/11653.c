#include <stdio.h>

int main(){
    int m, i = 2;
    scanf("%d", &m);

    while (m != 1){
        if (m % i == 0){
            m /= i;
            printf("%d\n", i);
        }
        else
            i++;
    }
}
