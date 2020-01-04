#include <stdio.h>
#include <stdlib.h>

int calc(int n, int m){
    if (n == 1){
        return m ;
    }
    int result = 1;
    for (int i=1; i<=m-(n-1); i++){
        result *= calc(n-1, m-i);
        result++;
    }
    return result;
}

int main()
{
    int iter;
    scanf("%d", &iter);

    for (int i=0; i<iter; i++){
        int n, m;

        scanf("%d %d", &n, &m);        
        printf("%d\n", calc(n, m));
    }

    return 0;
}