#include <stdio.h>
#include <stdlib.h>

int up_score[100000] = {0};
int dn_score[100000] = {0};

int main()
{
    int iter;
    scanf("%d", &iter);

    while(iter--){
        int n;
        scanf("%d", &n);

        for (int i=0; i<n; i++){
            scanf("%d", &up_score[i]);
        }
        for (int i=0; i<n; i++){
            scanf("%d", &dn_score[i]);
        }

        int sum1 = 0;
        int sum2 = 0;

        for (int i=0; i<=n/2; i++){
            sum1 += up_score[i*2] + dn_score[i*2 + 1];
            sum2 += up_score[i*2 + 1] + dn_score[i*2]; 
        }

        printf("%d\n", sum1 > sum2 ? sum1 : sum2);
         
    }

    return 0;
}