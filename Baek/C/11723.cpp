#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

enum commands {add, remov, check, toggle, all, empt};
bool S[21];

int trans(string s){
    if (s.compare("add") == 0)
        return add;
    else if (s.compare("remove")==0)
        return remov;
    else if (s.compare("check")==0)
        return check;
    else if (s.compare("toggle")==0)
        return toggle;
    else if (s.compare("all")==0)
        return all;
    else if (s.compare("empty")==0)
        return empt;
}

int main(){
    int iter;
    scanf("%d", &iter);
   
    while(iter--){
        char order[8];
        scanf("%s", &order);

        int ord = trans(order);

        int temp = 0;
        switch (ord){
            case add:
                scanf("%d", &temp);
                if (S[temp] == 1)
                    break;
                else
                    S[temp] = 1;
                break;
            
            case remov:
                scanf("%d", &temp);
                if (S[temp] == 1)
                    S[temp] = 0;
                else
                    break;
                break;

            case check:
                scanf("%d", &temp);
                if (S[temp] == 1)
                    printf("1\n");
                else
                    printf("0\n");
                break;

            case toggle:
                scanf("%d", &temp);
                if (S[temp] == 1)
                    S[temp] = 0;
                else
                    S[temp] = 1;
                break;
            
            case all:
                fill(&S[0], &S[21], 1);
                break;

            case empt:
                fill(&S[0], &S[21], 0);
                break;

            default:
                break;
        }
    }
}