#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int p1[1001];
int p2[1001];

vector<int> pp1, pp2;
vector<int>::iterator iter;

int main(){
    int target;
    cin >> target;
    
    int n, m;
    cin >> n >> m;

    for (int i=0; i<n; i++){
        cin >> p1[i];
    }

    for (int i=0; i<m; i++){
        cin >> p2[i];
    }

    int app = 0;
    for (int i=0; i<n; i++){
        app += p1[i];

        int sum = 0;
        int index = n-1;
        int j = i;
        while (index--){
            if (j >= n)
                j -= n;
            sum += p1[j++];
            pp1.push_back(sum);
        }
    }
    pp1.push_back(app); pp1.push_back(0);

    app = 0;
    for (int i=0; i<m; i++){
        app += p2[i];

        int sum = 0;
        int index = m-1;
        int j = i;
        while (index--){
            if (j >= m)
                j -= m;
            sum += p2[j++];
            pp2.push_back(sum);
        }
    }
    pp2.push_back(app); pp2.push_back(0);
    
    sort(pp1.begin(), pp1.end());
    sort(pp2.begin(), pp2.end());

    long long result = 0;
    for (int i=0; i<pp1.size(); i++){
        int low = lower_bound(pp2.begin(), pp2.end(), target - pp1[i]) - pp2.begin();
        int high = upper_bound(pp2.begin(), pp2.end(), target - pp1[i]) - pp2.begin();
        result += high - low;
    }

    /*for (iter=pp1.begin(); iter!=pp1.end(); ++iter){
        cout << *iter << " ";
    }
    cout << endl;
    
    for (iter=pp2.begin(); iter!=pp2.end(); ++iter){
        cout << *iter << " ";
    }
    cout << endl;*/

    cout << result << endl;
}