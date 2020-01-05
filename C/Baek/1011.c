#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    scanf("%d", &iter);

    while(iter--){
        int x, y;
        int result = 0;

        scanf("%d %d", &x, &y);

        if (y-x <= 2){
            printf("%d\n", 3);
        }
        else{
            int plus = 2;
            int j = 0;

            while (++j){
                result += plus;
                if (j % 2 == 0)
                    plus++;
                if (y-x-2 > result){
                    printf("%d\n", j+2);
                    break;
                }
            }
        }
    }
    return 0;
}

