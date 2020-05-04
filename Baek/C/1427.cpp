#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector <int> vi;

int main(){
    int x;
    while(scanf("%1d", &x) != EOF)
        vi.push_back(x);    

    sort(vi.begin(), vi.end(), greater<int>()); 

    for (auto i=vi.begin(); i != vi.end(); i++){
        printf("%d", *i);
    }

    printf("\n");
}