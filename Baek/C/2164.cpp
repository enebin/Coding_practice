#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

queue<int> q;

int main(){
    int iter;
    cin >> iter;

    for (int i=1; i<=iter; i++){
        q.push(i);
    }

    while (q.size() != 1){
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front();
}