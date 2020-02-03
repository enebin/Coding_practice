#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int A[1001];
int B[1001];

vector<int> A_part;
vector<int> B_part;

vector<int>::iterator iter;

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

    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            int sum = 0;
            for (int k=i; k<=j; k++)
                sum += A[k];
                A_part.push_back(sum);
        }
    }

    for (int i=0; i<m; i++){
        for (int j=i; j<m; j++){
            int sum = 0;
            for (int k=i; k<=j; k++)
                sum += B[k];
                B_part.push_back(sum);
        }
    }

    sort(A_part.begin(), A_part.end());
    sort(B_part.begin(), B_part.end());

    long long result = 0;
    for (int i=0; i<A_part.size() && A_part[i]; i++){
        int low = lower_bound(B_part.begin(), B_part.end(), target - A_part[i]) - B_part.begin();
        int high = upper_bound(B_part.begin(), B_part.end(), target - A_part[i]) - B_part.begin();
        result += high - low;
    }

    cout << result << "\n";

    return 0;
}