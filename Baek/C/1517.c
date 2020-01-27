#include <stdio.h>
#include <stdlib.h>

int nums[500001];
int count;
int flag = 0;


void swap(int i){
    if (nums[i] > nums[i+1]){
        int temp = nums[i];
        nums[i] = nums[i+1];
        nums[i+1] = temp;
        count++;
        flag = 0;
    }
}

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<iter; i++){
        scanf("%d", &nums[i]);
    }

    while(flag == 0){
        for (int i=0; i<iter-1; i++){
            flag = 1;
            swap(i);
        }
    }

    printf("%d\n", count);

    return 0;
}