#include <stdio.h>
#include <stdlib.h>

int res[500001];
int min = 500000;
int count = 0;
int temp;


int main()
{
    int iter;
    //scanf("%d", &iter);

    iter = 43;

    int j = 0;
    for(int i=1; i*i<=iter; i++){
        res[i] = i*i;
        j++;
    }

    while(j){
        temp = iter;
        count = 0;

        for (int i=j; i>=1; i--){
            while (temp - res[i] >= 0){
                temp -= res[i];
                count++;
            }
        }
                
        if (min > count){
            min = count;
        }

        j--;
    }

    printf("%d\n", min);

    return 0;
}