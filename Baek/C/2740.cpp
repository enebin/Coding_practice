#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, k;

int mat1[101][101] = {0, };
int mat2[101][101] = {0, };

int calc(int i, int j){
    int result = 0;
    for (int x=0; x<m; x++){
        result += mat1[x][j] * mat2[i][x];
        //cout << endl << "This " << mat1[i][x] << " " << mat2[x][j] << endl;
    }
    return result;
}

int main(){
    cin >> n >> m;
    for (int j=0; j<n; j++){
        for (int i=0; i<m; i++){
            cin >> mat1[i][j];
            //cout << mat1[i][j] << " ";
        }
    }

    cin >> m >> k;      
    for (int j=0; j<m; j++){
        for (int i=0; i<k; i++){
            cin >> mat2[i][j];
            //cout << mat2[i][j] << " ";
        }
    }

    for (int j=0; j<n; j++){
        for (int i=0; i<k; i++){
            cout << calc(i, j) << " ";
        }
        cout << endl;
    }

}