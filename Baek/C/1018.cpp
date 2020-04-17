#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool board1[51][51], board2[51][51];


int main(){
    int iter, ater;
    cin >> iter >> ater;

    board1[1][1] = true;
    board2[1][1] = false;

    for (int j=1; j<=50; j++){
        board1[j+1][1] = !board1[j][1];
        board2[j+1][1] = !board2[j][1];

        for (int i=1; i<=50; i++){
            board1[j][i+1] = !board1[j][i];
            board2[j][i+1] = !board2[j][i];
        }
    }

    while (iter)

}