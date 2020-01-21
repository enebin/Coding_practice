#include <stdio.h>
#include <math.h>

int nums[6000001];

int moduler(int x, int y){
    int res = 0;

    while (x){
        res += (int) (pow(x % 10, y) + 0.5);
        x /= 10;
    }

    return res;
}

int main()
{
    int a, p;
    scanf("%d %d", &a, &p);

    nums[0] = moduler(a, p);

    int j = 1;
    int flag = 0;
    while (flag == 0){
        nums[j] = moduler(nums[j-1], p);

        for (int i=0; i<j; i++){
            if (nums[i] == nums[j]){
                flag = i;
                break;
            }
        }
        j++;
    }

    printf("%d\n", flag + 1);

    return 0;
}