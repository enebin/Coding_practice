#include <stdio.h>
#include <stdlib.h>

int x[1001] = {0};
int res[1001] = {0};
int sup_max = 0;

int main()
{
    int iter;
    scanf("%d", &iter);

    for (int i=1; i<=iter; i++){
        scanf("%d", &x[i]);        
    }
    
    sup_max = x[1];
    res[1] = x[1];

    for (int i=2; i<=iter; i++){
        int pre_max = 0;

        for (int j=1; j<=i; j++){
            if (x[i] > x[j] && res[j] > pre_max){
                pre_max = res[j];
            } 
            
            res[i] = pre_max + x[i];
            if (res[i] > sup_max)
                sup_max = res[i];
        }
    }

    printf("%d\n", sup_max);

    return 0;
}