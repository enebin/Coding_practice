#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int graph[11][11] = {0, };
vector<int> nums;

int calc(int n){
    int sum = 0, a, b;

    for (int i=0; i<n-1; i++){
        a = nums[i], b = nums[i+1];
        if (graph[a][b] == 0){
            return -1;
        }
        else    
            sum += graph[a][b];
    }

    if (graph[b][nums[0]] != 0)
        sum += graph[b][nums[0]];
    else 
        return -1;
    
    return sum;
}

int main(){
    int iter;
    cin >> iter;

    for (int i=0; i<iter; i++){
        for (int j=0; j<iter; j++){
            cin >> graph[i][j];
        }
    }

    int re = iter;
    for (int i=0; i<iter; i++){
        nums.push_back(i);
    }

    int min = INT32_MAX;    
    do{
        int res = calc(iter);
        if (res >= 0){
            min = res < min ? res : min;
        }
    } while(next_permutation(nums.begin(), nums.end()));

    cout << min << endl;
}