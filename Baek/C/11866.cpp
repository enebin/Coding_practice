#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> fus;
    vector<int> result;

    for (int i=1; i<=N; i++)
          fus.push_back(i);             

    auto cur_loc = fus.begin();

    while (!fus.empty()){
        cur_loc += (M - 1);

        if (cur_loc + (M - 1) > fus.end()){
            while (cur_loc >= fus.end())
                cur_loc -= fus.size();
        }

        result.push_back(*cur_loc);
        fus.erase(cur_loc);
    }

    cout << '<';
    for (auto i=result.begin(); i<result.end()-1; i++)
        cout << *i << ", ";
    cout << result.back() << ">\n";

}
