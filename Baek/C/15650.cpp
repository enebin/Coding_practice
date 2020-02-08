#include <iostream>
#include <vector>

using namespace std;
int n, m;
vector<int> a;

void solve(int index, int cnt) {
    if (cnt == m) {
        for (auto i : a) 
            cout << i + 1 << " ";
        cout << endl;
        return;
    }

    for (int i=index; i<n; i++) {
        a.push_back(i);
        solve(i+1, cnt+1);
        a.pop_back();
    }
    
    return;
}

int main() {
    cin >> n >> m;

    solve(0, 0);
    return 0;
}



