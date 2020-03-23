#include <iostream>
#include <cstdio>
using namespace std;
 
int arr[102];
 
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
 
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
 
    int now = 0;
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                if (arr[i] + arr[j] + arr[k] <= m && m - (arr[i] + arr[j] + arr[k]) < m - now)
                    now = arr[i] + arr[j] + arr[k];
 
    printf("%d", now);
 
    return 0;
}