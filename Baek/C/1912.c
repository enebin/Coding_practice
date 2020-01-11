#include <stdio.h>
#include <stdlib.h>

int x[1000001] = {0};
int res[1000001] = {0}; 
int temp;
int max = 0;

int comp (int x, int y){
    return x > y ? x : y ;
}

int main()
{
    int iter;
    scanf("%d", &iter);

    int j = 1;
    for(int i=1; i<=iter; i++){

        scanf("%d", &temp);
        
        if (temp >= 0){
            x[j] += temp;
        }
        else{
            x[++j] = temp; 
            j++;
        }
    }

    if (x[1] < 0)
        x[1] = 0;

    for(int i=2; i<=j; i++){
        if (max < comp(res[i] - ))
    }

    return 0;
}