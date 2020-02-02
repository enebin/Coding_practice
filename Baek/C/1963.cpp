#include <iostream>
#include <queue>
#include <string>

using namespace std;

int visited[1070]={0, };
int sosu[1070];

queue<int> q;

bool checker(int n, int m){
    string prod_n = to_string(n);
    string prod_m = to_string(m);
    
    int count = 0;
    for (int i=0; i<5; i++){
        //cout << prod_n[i] << " " << prod_m[i] << endl;
        if (prod_m[i] != prod_n[i]){
            count++;
        }
    }

    if (count >= 2)
        return 0;
    else
        return 1;
}

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

int bfs(int a, int b){
    q.push(a); 
    visited[a] = 1;

    while(!q.empty()){
        int p = q.front(); 
        q.pop();

        if (p == b) 
            return visited[p]-1;
        
        for (int i=0; i<1070; i++){
            if (checker(sosu[p], sosu[i]) && (visited[i] == 0)) {
                visited[i] = visited[p]+1;
                q.push(i);
            }
        }     
    }
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

    /*cout << checker(1033, 1107) << endl;
    return 0;*/

    if (ai == bi){
        cout << 0;
    }
    else {
        cout << bfs(ai, bi) << "<-bfs";
    }
}   