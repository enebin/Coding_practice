#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXIMUM 1000001

int nums[1000005] = {0};
int sosu[80000] = {0};

int main(){
     for (int i=2; i<=MAXIMUM; i++)
            nums[i] = i;

        for (int i=2; i<=sqrt(MAXIMUM); i++){
            if (nums[i] != 0){
                for (int j=i; j<=MAXIMUM; j+=i)
                    nums[j+i] = 0;
            }
        }

        int iter = 0;
        for (int i=2; i<=MAXIMUM; i++){
            if (nums[i] != 0)
                sosu[iter++] = nums[i];
        }


    while (1){
        int m, x = 0, y = 0;
        scanf("%d", &m);

        if (m == 0)
            return 0;       

        int mark = 1;
        for (int i=0; i<=iter; i++){
            if (m > sosu[i]){
                mark++;
            }
            else 
                break;
        }

        int max_gap = 0, flag = 0;
        for (int i=mark-1; i>=1; i--){
            for (int j=1; j<=i; j++){
                if (sosu[i] + sosu[j] == m){
                    x = sosu[i];
                    y = sosu[j];
                    flag = 1;
                    break;
                }
                if (flag)
                    break;
            }
        }        

        if (x == 0 && y == 0)
            printf("Goldbach's conjecture is wrong.\n");
        else 
            printf("%d = %d + %d\n", m, y, x);
    }
}
