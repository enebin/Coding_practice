#include <iostream>
#include <algorithm>

using namespace std;

float score[1001];

int main(){
    int iter;
    cin >> iter;

    float temp = 0;
    for (int i=0; i<iter; i++){
        cin >> score[i];

        if (temp < score[i]){
            temp = score[i];
        }
    }

    float summ = 0;
    for (int i=0; i<iter; i++){
        score[i] = (score[i] / temp)* 100;
        summ += score[i];
    }

    cout << (float) (summ / iter) << endl;
}