#include <stdio.h>
#include <stdlib.h>

int fib[20];

int fibo(int num){
        if (num == 0) 
            return 0;
        else if (num == 1)
            return 1;
        else 
            return fibo(num-1) + fibo(num-2);
}

int main(){
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<=iter; i++){
        fib[i] = fibo(i);
        //printf("%d %d\n", i, fib[i]);
    }

    printf("%d\n", fib[iter]);

    return 0;
}