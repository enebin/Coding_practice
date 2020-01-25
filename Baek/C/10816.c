#include <stdio.h>
#include <stdlib.h>

int cards[500010];

int comp(const void* x, const void* y){
    int a = *(int*)x;
    int b = *(int*)y;

    return a > b ? 1 : -1;
}

int upper(int n, int input){
    int left = 0;
    int right = n-1;
    int flag = 0;
    int mid;

    while (left <= right) {
        mid = (left + right) / 2;
        int res = cards[mid];     

        if (res <= input){
            left = mid + 1;
        }
        else 
            right = mid - 1;
    }

    return left - 1;
}


int lower(int n, int input){
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
        else 
            right = mid - 1;
    }

    return left - 1;
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
       
        int a = upper(n, input);
        int b = lower(n, input);

        printf("%d ", a - b);  
    }
    return 0;
}