#include <stdio.h>
#include <string.h>

int nums[500001];
int count = 0;

int bisect(int n, int end){
    int left = 0;
    int right = end;

    while (left <= right){
        int mid = (right + left) / 2;

        if (nums[mid] <= n)
            left = mid + 1;        
        else
            right = mid - 1;
    }

    memmove(nums + left + 1, nums + left, sizeof(int)*(end - left + 1));
    nums[left] = n;

    return left - 1;
}

int main()
{
    int iter;
    scanf("%d", &iter);

    int temp, res;
    for(int i=0; i<iter; i++){
        scanf("%d", &temp);

        res = bisect(temp, i);
        count += i - res;
    }

    /*for(int i=1; i<iter + 1; i++){
        printf("%d ", nums[i]);
    }*/

    printf("%d\n", count);

    return 0;
}