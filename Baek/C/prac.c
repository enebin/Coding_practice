#include <stdio.h>

void adder(char* a, char* b){
    for (int i=0; i<2; i++){
        int sum = a[i]-48 + b[i]-48;

        if (sum >= 10){
            sum -= 10;
            a[i+1]++; 
        }

        a[i] = sum + 48;
    }
    return;
}

int main(){
    char a[10];
    char b[10];

    sprintf(a, "%d", 81);
    sprintf(b, "%d", 21);

    adder(a, b);

    for (int i=1; i>=0; i--){
        printf("%c", a[i]);
    }
 
    return 0;
}


