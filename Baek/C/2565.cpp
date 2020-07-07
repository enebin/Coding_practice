#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>> map;
vector<int> table;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int iter;
    cin >> iter;

    int n, m;
    for (int i=0; i<iter; i++){
        cin >> n >> m;        
        map.push_back(make_pair(n, m));
    }
    
    int size = map.size();
    sort(map.begin(), map.end());

    /*for (int i=0; i<size; i++)
        cout << map[i].second << endl;

    cout << endl;*/

    for (int i=0; i<size; i++){
        int comp = map[i].second;

        if (table.empty()){
            table.push_back(comp);
        }
        else {
            auto location = lower_bound(table.begin(), table.end(), comp);

            if (comp > table.back()){
                table.push_back(comp);
            }
            else if (comp < table.back()){
                table[location - table.begin()] = comp;
            }
        }

        /*for (auto i=table.begin(); i<table.end(); i++)
            cout << *i << endl;
        
        cout << endl;*/
    }

    int cut_size = table.size();

    cout << size - cut_size << endl;
}
