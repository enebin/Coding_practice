#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int cnt[26] = {0, };

int changer(char x){
    if (x >= 'a'){
        return x - 'a';
    }
    if (x <= 'Z'){
        return x - 'A';
    }
}

int main(){
    char temp[1000001];
    scanf("%s", temp);
    string iter = temp;

    int maxx = 0;
    for (int i=0; i<iter.size(); i++){
        int &letter = cnt[changer(iter[i])];
        letter += 1;

        if(letter > maxx)
            maxx = letter;
    }

    vector<int> maxi;
    for (int i=0; i<26; i++){
        if (cnt[i] == maxx)
            maxi.push_back(i);
    }

    if (maxi.size() > 1)
        printf("?\n");
    else
        printf("%c\n", 'A' + maxi.front());
}