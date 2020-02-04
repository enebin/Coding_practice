#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long int lld; 

int A[4001], B[4001], C[4001], D[4001];
vector<int> AB, CD;

vector<int>::iterator itr;

int main(){
    int iter;
    cin >> iter;

    for (int i=0; i<iter; i++){
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    for (int i=0; i<iter; i++){
        for (int j=0; j<iter; j++){
            AB.push_back(A[i] + B[j]);
            CD.push_back(C[i] + D[j]);
        }
    }

    sort(AB.begin(), AB.end());
    sort(CD.begin(), CD.end());

    lld result = 0;
    for (int i=0; i<AB.size(); i++){
        int low = lower_bound(CD.begin(), CD.end(), AB[i]*(-1)) - CD.begin();
        int high = upper_bound(CD.begin(), CD.end(), AB[i]*(-1)) - CD.begin();
        result += high - low;
    }

    cout << result << endl;
    /*for (itr=AB.begin(); itr!=AB.end(); ++itr){
        cout << *itr << " ";
    }

    cout << endl; 
    for (itr=CD.begin(); itr!=CD.end(); ++itr){
        cout << *itr << " ";
    }*/

}