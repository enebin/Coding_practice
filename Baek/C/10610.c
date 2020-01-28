#include <stdio.h>
#include <stdlib.h>

int nums[100001];

int comp(const void* x, const void* y){
    int n1 = *(int*)x;
    int n2 = *(int*)y;

    return n1 < n2 ? 1 : -1;
}

int main()
{
    int i = 0;
    while(scanf("%1d", &nums[i++]) != EOF){
    }

    int flag = 0, sum = 0;
    for (int x=0; x<i-1; x++){
        if (nums[x] == 0){
            flag = 1;
        }
        sum += nums[x];
    }
    if (sum % 3 != 0)
        flag = 0;

    if (flag){
        qsort(nums, i-1, sizeof(int), comp);
        for (int x=0; x<i-1; x++)
            printf("%d", nums[x]);
        printf("\n");
    }
    else 
        printf("-1\n");

    return 0;
}