#include <iostream>
#include <stack>
using namespace std;

int a[100001];
stack<int> s;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1){
        int iter;
        cin >> iter;

        if (iter == 0){
            break;
        }

        for (int i=0; i<iter; i++){
            cin >> a[i];
        }

        while (!s.empty())  s.pop();
        long long ans = 0;
        
        for (int i=0; i<iter; i++){
            while (!s.empty() && a[s.top()] > a[i]){
                int height = a[s.top()];
                s.pop();

                int width = i;
                if (!s.empty()){
                    width = (i - 1 - s.top());
                }
                
                if (ans < width * height)
                    ans = width * height;
            }
            s.push(i);
        }
        
        while (!s.empty()){
            int height = a[s.top()];
            s.pop();
            int width = iter;
            if (!s.empty()){
                width = iter - 1 - s.top();
            }
            
            if (ans < width * height)
                ans = width * height;
        }
        cout << ans << endl;
    }   
}
