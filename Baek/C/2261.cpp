#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef pair<int, int> pii;

vector<pair<int, int>> loc;

double getDist(pii a, pii b){
    int x = a.first - b.first;
    int y = a.second - b.second;
 
    return (double)(x*x + y*y);
}

int main(){
    int iter;
    cin >> iter;

    while(iter--){
        int x, y;
        cin >> x >> y;

        loc.push_back(make_pair(x, y));
    }

    sort(loc.begin(), loc.end());
    
    int min_dist = getDist(loc[0], loc[1]);
    int min_x = loc[1].first - loc[0].first;

    for (vector<pair<int, int>>::iterator it = loc.begin(); it != loc.end()-1 ; it++){
        if (((it+1)->first) - (it->first) <= min_x){
            int temp_dist = getDist(*it, *(it+1));
            if (temp_dist < min_dist){
                min_dist = temp_dist;
            }
        }        
        //cout << it -> first << " " << it -> second << endl;
    }

    cout << min_dist << endl;
}