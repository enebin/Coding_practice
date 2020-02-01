#include <iostream>
#include <queue>

using namespace std;

int n, k;
int visited[100001]={0, };
int sosu[1070];

queue<int> q;

void getChe() {
    int* arr = (int*) malloc(sizeof(int) * 9999);

    for (int i = 2; i <= 9999; i++) 
        arr[i] = i;

    for (int i = 2; i <= 9999; i++) { 
        if (arr[i] == 0) 
            continue;
        for (int j = i + i; j <= 9999; j += i) 
            arr[j] = 0;
    }

    int j = 0;
    for (int i = 1000; i <= 9999; i++) {
        if (arr[i] != 0)
            sosu[j++] = arr[i];
    }

    free(arr);
}

int bfs(){
    q.push(n); visited[n] = 1;

    while(!q.empty()){
        int p = q.front(); q.pop();
        if(p==k) return visited[p]-1;
        
        if(p-1>=0&&visited[p-1]==0){
            visited[p-1] = visited[p]+1;
            q.push(p-1);
        }
        if(p+1<=100000&&visited[p+1]==0){
            visited[p+1] = visited[p]+1;
            q.push(p+1);
        }
        if(2*p<=100000&&visited[2*p]==0){
            visited[2*p] = visited[p]+1;
            q.push(2*p);
        }
    }
}

int checker(int a, int b){
    
}

int main(){
    getChe();

    int a, b;
    cin >> a >> b;

    int ai, bi;
    for (int i=0; i<1070; i++){
        if (sosu[i] == a)
            ai = i;
        if (sosu[i] == b){
            bi = i;
            break;
        }            
    }

    if (ai == bi){
        cout << 0;
    }
    else {

    }
}   