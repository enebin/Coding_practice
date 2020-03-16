#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, x;
    scanf("%d %d", &n, &x);

    while(n--){
        int temp;
        scanf("%d", &temp);
        if (temp < x)
            printf("%d ", temp);
    }
   
}