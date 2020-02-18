#include <iostream>
#include <algorithm>

using namespace std;

int heap[100005];
int cursor;

void push(int x){
    heap[++cursor] = x;

    int i = cursor;
    while (i > 1){
        if (abs(heap[i]) < abs(heap[i/2]))
            swap(heap[i], heap[i/2]);
        else
            break;
        
        i /= 2;
    }
}

void pop(){
    if (cursor == 0){
        printf("%d: ddd\n", 0);
        return;
    }

    printf("%d: ddd\n", heap[1]);

    swap(heap[1], heap[cursor]);
    heap[cursor--] = INT32_MAX;

    int i = 1;
    while (i*2 <= cursor){
        if (abs(heap[i]) < abs(heap[i*2]) && abs(heap[i]) < abs(heap[i*2 + 1]))
            break;

        else{
            if (abs(heap[i*2]) < abs(heap[i*2 + 1])){
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
    scanf("%d", &iter);

    while(iter--){
        int num;
        scanf("%d", &num);

        if (num == 0)        
            pop();
        else
            push(num);
    }
}