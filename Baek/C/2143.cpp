#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int A[1001];
int B[1001];

int sum(int* x, int* y){
    int res = 0;
    while (x != y)
        res += *(x++);
    return res;
}

int main(){
    int target;
    cin >> target;

    int n, m;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }

    cin >> m;
    for (int i=0; i<m; i++){
        cin >> B[i];
    }

    int* as = A; int* ae = A;    
    int* bs = B; int* be = B;
    
    int result;
    int count = 0;
    while (ae != A + n + 1 || be != B + m + 1){
        result = sum(s, e);

        if (result == target){
            e++;
            count++;
        }
        else if (result > target)
            s++;
        else
            e++;
    }

}