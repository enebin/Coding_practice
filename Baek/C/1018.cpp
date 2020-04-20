#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
bool board1[51][51], board2[51][51];

int changer(char c){
    if (c == 'W')
        return 1;
    else if (c == 'B')
        return 0;
    else 
        return 99;
}


int main(){
    int iter, ater;
    cin >> iter >> ater;

    board1[0][0] = true;
    board2[0][0] = false;

    for (int j=0; j<50; j++){
        board1[j+1][0] = !board1[j][0];
        board2[j+1][0] = !board2[j][0];

        for (int i=0; i<=50; i++){
            board1[j][i+1] = !board1[j][i];
            board2[j][i+1] = !board2[j][i];
        }
    }

    int count1 = 0, count2 = 0;
    char board_in[51][51];

    for (int i=0; i<iter; i++){
        scanf("%s", board_in[i]);
    }

    for (int i=0; i<iter; i++){
        for (int j=0; j<ater; j++){
            int temp = board_in[i][j];

            cout << changer(temp) << " ";
                       
            if (changer(temp) != board1[i][j])
                count1++;
            if (changer(temp) != board2[i][j])
                count2++;
            
        }
        cout << endl;

    }

    cout << min(count1, count2) << endl;
}