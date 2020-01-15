#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef long long int lld;

char fib[100];
char temp1[100];
char temp2[100];

void adder(char* t, char* a, char* b){
    for (int i=0; i<100; i++){
        int sum = a[i]-48 + b[i]-48;

        if (sum >= 10){
            sum -= 10;
            t[i+1]++;
        }

            for (int j=2; j>=0; j--){
                printf("%c, %c ", fib[j], fib[j+1]);
                printf("%c, %c ", temp1[j], temp2[j+1]);
                printf("%c, %c \n", temp2[j], temp2[j+1]);
            }


        t[i] = sum + 48;
    }
    return;
}

int main(){
    lld iter;
    scanf("%lld", &iter);

    for (int i=0; i<100; i++){
        fib[i] = '0';
        temp1[i] = '0';
        temp2[i] = '0';
    }

    temp1[0] = '1';
    temp2[0] = '1';


    if (iter == 1){
        printf("%d\n", 1);
    }
    else if (iter == 2){
        printf("%d\n", 1);
    }

    else {
        for(lld i=0; i<iter-2; i++){
            adder(fib, temp1, temp2);


            strcpy(temp1, temp2);
            strcpy(temp2, fib);
        }

        for (int i=10; i>=0; i--){
            printf("%c", fib[i]);
        }
    }

    return 0;

}