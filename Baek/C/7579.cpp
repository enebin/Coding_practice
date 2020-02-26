#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;
int N, M, arr[101], cost[101];

int main(){
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++)
        scanf("%d", arr + i);
    
    for (int i = 0; i < N; i++)
        scanf("%d", cost + i);
    
    

    printf("%d\n", mini);
}