#include <stdio.h>
#include <stdlib.h>

int nums[100] = {0};
int sosu[1001] = {2};

int main()
{
    int iter;
    scanf("%d", &iter);

    int max = 0;
    for(int i=1; i<=iter; i++){
        scanf("%d", &nums[i]);
        if (max < nums[i])
            max = nums[i];
    }

    int count = 0;
    int none = 0;
    for (int i=2; i<=max; i++){
        for (int j=0; j<=count; j++){
            if (i % sosu[j] == 0){
                none = 1;
            }
        }
        if (!none)
            sosu[++count] = i;
        none = 0;
    }

    int res = 0;
    for (int i=0; i<=count; i++){
        for (int j=1; j<=iter; j++){
            if (nums[j] == sosu[i])
                res++;
        }
    }

    printf("%d\n", res);
    return 0;
}