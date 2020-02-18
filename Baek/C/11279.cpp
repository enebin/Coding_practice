#include <iostream>
#include <algorithm>

using namespace std;

int heap[100001];
int cursor;

void push(int x){
    heap[++cursor] = x;

    for (int i=cursor; i>1; i/=2){
        if (heap[i] > heap[i/2])
            swap(heap[i], heap[i/2]);
        else
            break;
    }
}

void pop(){
    cout << heap[1] << endl;

    if (cursor == 0){
        cout << 0 << endl;
        return;
    }

    swap(heap[1], heap[cursor]);
    heap[cursor--] = 0;

    for (int i=1; i*2<=cursor;){
        if (heap[i] > heap[i*2] && heap[i] > heap[i*2 + 1])
            break;

        else{
            if (heap[i*2] > heap[i*2 + 1]){
                swap(heap[i], heap[i*2]);
                i *= 2;
            }
            else{
                swap(heap[i], heap[i*2 + 1]);
                i = i*2 + 1;
            }
        }
    }
}

int main(){
    int iter;
    cin >> iter;

    while(iter--){
        int num;
        cin >> num;

        if (num == 0)
        
            pop();
        else
            push(num);
    }
}