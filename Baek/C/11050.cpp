#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX 1001

int bi(int n, int k) {
	int C[MAX][MAX];
	int m;
	for (int i = 0; i <= n; i++) {
		m = (i < k) ? i : k;
		for (int j = 0; j <= m; j++) {
			if (j == 0 || j == i) C[i][j] = 1;
			else C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
		}
	}
	return C[n][k];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int result = bi(n, m);
    cout << result << endl;
}