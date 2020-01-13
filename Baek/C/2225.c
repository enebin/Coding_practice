#include <stdio.h>
#include <stdlib.h>

long long int count[201][201] = {0, };

int main()
{
    int K, N;
    scanf("%d", &N);
    scanf("%d", &K);

    for (int i=0; i<=N; i++)
        count[i][1] = 1;

    for (int i=0; i<=N; i++) {
        for (int j=1; j<=K; j++){
            for (int k=0; k<=i; k++){
                count[i][j] += count[i-k][j-1] % 1000000000;
            }
       }
    }

    printf("%lld\n", count[N][K] % 1000000000);

    return 0;
}