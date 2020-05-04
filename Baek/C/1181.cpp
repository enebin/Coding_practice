#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector <char*> vi;

int main(){
    int iter;
    scanf("%d", &iter);

    while(iter--){
        char buffer[51];
        scanf("%s", buffer);
        vi.push_back(buffer);

        sort(vi.begin(), vi.end(), greater<int>()); 

        for (auto i=vi.begin(); i != vi.end(); i++){
            printf("%d", *i);
        }
    }
    printf("\n");
}