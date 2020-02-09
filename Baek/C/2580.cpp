#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int sudoku[10][10] = {0, };
vector<vector<int>> spot;
vector<int> xs;
vector<int> ys;

int find_low(int n){
    while (n % 3 != 1){
        n--;
    }
    return n;
}

int find_high(int n){
    while (n % 3 != 0){
        n++;
    }
    return n;
}

bool checker(int n, int x, int y){
    for (int i=1; i<=9; i++){ //search horizontally
        if (sudoku[i][y] == n)
            return 0;
    }

    for (int i=1; i<=9; i++){ //search vertically
        if (sudoku[x][i] == n)
            return 0;
    }

    int low_x = find_low(x), high_x = find_high(x);
    int low_y = find_low(y), high_y = find_high(y);

    for (int j=low_y; j<=high_y; j++){ //search sqaure
        for (int i=low_x; i<=high_x; i++){   
            if(sudoku[i][j] == n)
                return 0;
        }
    }
    return 1;
}

void dfs(int step, int x, int y){
    //cout << step << endl;
    if (step == spot[0].size()){
        for (int y=1; y<=9; y++){
            for (int x=1; x<=9; x++){
                cout << sudoku[x][y] << " ";
            }
        cout << endl;
        }
        exit(0);
    }
    else {
        for (int n=1; n<=9; n++){
            if (checker(n, x, y) == 1){
                sudoku[x][y] = n;

                int ss = step + 1;
                dfs(ss, spot[0][ss], spot[1][ss]);
                
                sudoku[x][y] = 0;
            }
        }
    }
    return;
}

int main(){
    int temp;
    for (int y=1; y<=9; y++){
        for (int x=1; x<=9; x++){
            cin >> temp;
            sudoku[x][y] = temp;

            if (temp == 0){
                xs.push_back(x);
                ys.push_back(y);
            }            
        }
    }

    spot.push_back(xs);
    spot.push_back(ys);

    dfs(0, spot[0][0], spot[0][0]);

    return 0;
}