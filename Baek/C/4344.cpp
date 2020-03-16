#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int iter;
    cin >> iter;

    int score[1001];
    while(iter--){
        int itr;
        cin >> itr;

        int summ = 0;
        for (int i=0; i<itr; i++){
            cin >> score[i];
            summ += score[i];
        }

        float avr = summ / itr;
        int count = 0;
        for (int i=0; i<itr; i++){
            if (score[i] > avr)
                count++;            
        }
        
        float res = (float)count / itr;
        printf("%.3f%%\n", res * 100);
    }
  
}