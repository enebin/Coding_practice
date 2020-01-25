#include <stdio.h>
#include <stdlib.h>

//일치하지 않으면 9등분.

int paper[2200][2200];
int element[3] = {-1, 0, 1};
int count[3] = {0, };

void IsSame(int start, int n, int stride){
    if (stride > 1){
        for (int i=start; i<start+stride; i++){
            for (int j=start; j<start+stride; j++){
                if(paper[i][j] !=element[n]){
                    for (int k=start; k<start+stride; k+=(stride/3)){
                        IsSame(k, n, stride / 3);
                    }
                    return;
                }
            }
        }
        count[n]++;
    }
    else if(stride == 1){
        if (paper[start][start] == element[n])
            count[n]++;
        else
            return;
    }
    else
        return;
}

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<iter; i++){
        for (int j=0; j<iter; j++)
            scanf("%d", &paper[i][j]);
    }

    for (int i=0; i<3; i++){
        IsSame(0, i, iter);
    }

    for (int i=0; i<3; i++){
        printf("%d\n", count[i]);
    }

    return 0;
}