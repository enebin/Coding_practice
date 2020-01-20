#include <stdio.h>
#include <math.h>

int nums[1000005] = {0};

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    for (int i=2; i<=n; i++){
        nums[i] = i;
    }

    for (int i=2; i<=sqrt(n); i++){
        if (nums[i] != 0){
            for (int j=i; j<=n; j+=i)
                nums[j+i] = 0;
        }
    }

    for (int i=m; i<=n; i++){
        if (nums[i] != 0)
            printf("%d\n", nums[i]);
    }

    return 0;
}