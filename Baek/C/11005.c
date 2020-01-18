#include <stdio.h>

typedef long long int lld;

void base(lld n, lld b){
    if (n != 0){
        base(n / b, b);

        if (n % b > 9 && b > 10)
            printf("%c", 'A' + (n % b) - 10);
        else
            printf("%d", n % b);
    }
}

int main(){
    lld N, B;
    scanf("%lld %lld", &N, &B);

    base(N, B);
    printf("\n");
}


