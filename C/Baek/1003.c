#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cc[41][2];
    cc[0][0] = 1;
    cc[0][1] = 0;
    cc[1][0] = 0;
    cc[1][1] = 1;

    for (int j=2; j<41; j++){
        for (int i=0; i<2; i++){
            cc[j][i] = cc[j-2][i] + cc[j-1][i];
        }
    }

    int iter;
    scanf("%d", &iter);

    while(iter--){
        int n;
        scanf("%d", &n);

        printf("%d %d\n", cc[n][0], cc[n][1]);
    }

    return 0;
}


/* Better code
		{
			x = b;
			b = a + b;
			a = x;
		}
*/