#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, less<int>> maxq; 
priority_queue<int, vector<int>, greater<int>> minq; 

int main(){
    int iter;
    cin >> iter;

    while(iter--){
        int temp;
        scanf("%d", &temp);

        if (maxq.empty())
            maxq.push(temp);
        else if (maxq.size() == minq.size())
            maxq.push(temp);
        else
            minq.push(temp);

        if (!maxq.empty() && !minq.empty() && !(maxq.top() <= minq.top())){
            minq.push(maxq.top());
            maxq.push(minq.top());

            maxq.pop();
            minq.pop();           
        }
        
        printf("%d\n", maxq.top());
    }        
}