#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> num1;

bool bisearch(int x){
    int low = 0, high = num1.size() - 1;

    while (low <= high){
        int mid = (low + high) / 2;

        if (num1[mid] == x){
            return 1;
        }
        else if (num1[mid] <= x)
            low = mid + 1;
        else if (num1[mid] > x){
            high = mid - 1;
        }
    }

    return 0;
}

int main(){
    int iter, iter2, temp;
    
    scanf("%d", &iter);
    while(iter--){
        scanf("%d", &temp);
        num1.push_back(temp);
    }

    sort(num1.begin(), num1.end());

    scanf("%d", &iter2);
    while(iter2--){
        scanf("%d", &temp);
        printf("%d\n", bisearch(temp));
    }

}
