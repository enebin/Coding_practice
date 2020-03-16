#include <iostream>

using namespace std;

int main(){
    int iter;
    cin >> iter;
    getchar();

    while(iter--){
        int ind = 0;
        int sum = 0;
        
        while(1){
            char temp;
            scanf("%1c", &temp);

            if (temp == '\n')
                break;

            else if (temp == 'O'){
                ind++;
                if (ind != 0)
                    sum += ind;
            }

            else
                ind = 0;
        }

        cout << sum << endl;
        sum = 0;
    }
}