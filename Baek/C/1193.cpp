#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int center = 1;
    int end = 1;
    int interval = 2;
    int stage = 2;

    while (!(N >= center && N <= end)){
        center = end + 1;
        end += interval;
        interval += 1;
        stage += 1;
    }

    int denominator, numerator;

    if (stage % 2 != 0){
        denominator = 1;
        numerator   = stage - 1;

        while (center++ != N){
            denominator++;
            numerator--;
        }
    }
    else{
        denominator = stage - 1;
        numerator   = 1;

        while (center++ != N){
            denominator--;
            numerator++;
        }
    }

    printf("%d/%d", denominator, numerator)    ;
}