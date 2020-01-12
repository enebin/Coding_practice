#include <stdio.h>
#include <stdlib.h>

int step[301] = {0};
int res[301] = {0};
int mark[301] = {0};

int main()
{
    int iter;
    scanf("%d", &iter);

    for (int i=1; i<=iter; i++) {
        scanf("%d", &step[i]);
    }

    res[1] = step[1];
    res[2] = step[1] + step[2];
    mark[2] = 1;

    for (int i=3; i<=iter; i++){
        if (mark[i-1] == 1){
            if (res[i-2] + step[i] > step[i] + step[i-1] + res[i-3]){
                res[i] = res[i-2] + step[i];
            } 
            else{
                res[i] = step[i] + step[i-1] + res[i-3];
                mark[i] = 1;
            }
        }
        else{
            if (res[i-1] + step[i] > res[i-2] + step[i]){
                res[i] = res[i-1] + step[i];
                mark[i] = 1;
            }
            else 
                res[i] = res[i-2] + step[i];
        }
    }

    printf("%d\n", res[iter]);

    return 0;
}