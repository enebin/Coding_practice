#include <stdio.h>
#include <stdlib.h>

int cards[500001];

int comp(const void* x, const void* y){
    int a = *(int*)x;
    int b = *(int*)y;

    return a > b ? 1 : -1;
}

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &cards[i]);
    }

    qsort(cards, n, sizeof(int), comp);

    int iter;
    scanf("%d", &iter);

    while (iter--){
        int input;
        scanf("%d", &input);

        int left = 0;
        int right = n-1;
        int flag = 0;
        int mid;

        while (left <= right) {
            mid = (left + right) / 2;
            int res = cards[mid];     

            if (res < input){
                left = mid + 1;
            }
            else if (res == input){
                printf("%d\n", 1);
                flag = 1;
                break;
            }
            else 
                right = mid - 1;
        }
        if (!flag)   
            printf("%d\n", 0);  
    }
    return 0;
}