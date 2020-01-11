#include <stdio.h>
#include <stdlib.h>

int x[1001];
int x_rev[1001];
int up[1001];
int down[1001];
int d_rev[1001];
int max = 0;

int main()
{
    int iter;
    scanf("%d", &iter);

    for (int i=1; i<=iter; i++){
        scanf("%d", &x[i]);
    }
    
    for (int i=iter-1; i>=0; i--){
        x_rev[i+1] = x[iter-i];
    }

    for (int i = 1; i <= iter; i++)
    {
        int min = 0;
        for (int j = 0; j < i; j++){
            if (x[i] > x[j]){
                if (min < up[j])
                    min = up[j];
            }
        }
        up[i] = min + 1;

        min = 0;
        for (int j = 0; j < i; j++){
            if (x_rev[i] > x_rev[j]){
                if (min < down[j])
                    min = down[j];
            }
        }
        down[i] = min + 1;
    }

    for (int i=iter-1; i>=0; i--){
        d_rev[i+1] = down[iter-i];
    }

    for (int i=1; i<=iter; i++){
        int res = up[i] + d_rev[i];

        if (max < res){
            max = res;
        }

        //printf("%d %d %d\n", x[i], up[i], d_rev[i]);
    }

    printf("%d\n", max - 1);

    return 0;
}