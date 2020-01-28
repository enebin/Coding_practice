#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int joy[1001][1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            scanf("%d", &joy[i][j]);

    if(n % 2 == 1 && m % 2 == 0){ //odd height, even width
        int times = n / 2;
        while (times--){
            for (int i=1; i<m; i++){
                printf("R");
            } printf("D");
            for (int i=1; i<m; i++){
                printf("L");
            } printf("D");
        }
        for (int i=1; i<m; i++){
            printf("R");
        } printf("\n");
    }
    else if (n % 2 == 1 && m % 2 == 1){ //double odd
        int times = n / 2;
        while (times--){
            for (int i=1; i<m; i++){
                printf("R");
            } printf("D");
            for (int i=1; i<m; i++){
                printf("L");
            } printf("D");
        }
        for (int i=1; i<m; i++){
            printf("R");
        } printf("\n");
    }
    else if (n % 2 == 0 && m % 2 == 1){ //even height, odd width
        int times = m / 2;
        while (times--){
            for (int i=1; i<n; i++){
                printf("D");
            } printf("R");
            for (int i=1; i<n; i++){
                printf("U");
            } printf("R");
        }
        for (int i=1; i<m; i++){
            printf("D");
        } printf("\n");
    }
    else{ // double even
        int min = INT_MAX;
        int minx, miny;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++)
                if ((i+j) % 2)
                    if (min > joy[i][j])
                        miny = i, minx = j;

        if (minx == 0){
            
        }

    }



    return 0;
}