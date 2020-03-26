#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<pair<int, int>> per_dat;

bool check(pair<int, int> x, pair<int, int> y){  // (비교군, 대조군)
    if (x.first < y.first && x.second < y.second)
        return 1;
    else
        return 0;
}

int main(){
    int iter;
    cin >> iter;

    while(iter--){
        int weight, height;
        cin >> weight >> height;

        per_dat.push_back({weight, height});
    }

    vector<int> result;
    for (int i=0; i<per_dat.size(); i++){
        int loc = 1;
        
        for (int j=0; j<per_dat.size(); j++){
            if (j == i)
                continue;
            else if (check(per_dat[i], per_dat[j]))
                loc++;                
        }
        result.push_back(loc);
    }

    //cout << "sizeof res: " << result.size() << endl;

    for (auto i=result.begin(); i!=result.end(); i++){
        cout << *i << endl;
    }

}