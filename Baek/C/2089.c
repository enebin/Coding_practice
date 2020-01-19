#include <stdio.h>

//typedef long long int int;

void base(int n){
    int b = -2;
    if (n != 0){
        if (n < 0){
           base((n / b) + 1);
        }
        else {
            base(n / b);
        }
        
        if (n % b == 0)
            printf("%d", 0);
        else
            printf("%d", 1);
    }
}

int main(){
    int N;
    scanf("%d", &N);

    base(N);
    printf("\n");
}


