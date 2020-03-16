#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int iter;
    scanf("%d", &iter);

    while (iter--){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}