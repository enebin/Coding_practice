#include <stdio.h>
#include <stdlib.h>

int house[200001];

int comp(const void* x, const void* y){
    int a = *(int*)x;
    int b = *(int*)y;

    return a > b ? 1 : -1;
}

int main()
{
    int c, n;
    scanf("%d %d", &n, &c);

    int max = 0;
    for(int i=1; i<=n; i++){
        scanf("%d", &house[i]);
    }

    qsort(house, n, sizeof(int), comp);

    int left = 1;
    int right = house[n] - house[1];
    int mid;

    while (left <= right) {
        mid = (left + right) / 2;
        int res = 1;
        int start = house[1];

        for (int i=1; i<=n; i++){
            if (house[i] - start >= mid){
                res++;
                start = house[i];
            }
        }

        if (res >= c){
            left = mid + 1;
        }
        else 
            right = mid - 1;
    }
    

    printf("%d\n", left - 1);  
    return 0;
}