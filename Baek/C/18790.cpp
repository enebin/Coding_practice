#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int nums[501] = {0, };

int main(){
    int n;
    cin >> n;

	int iter = 2*n - 1;
	while (iter--){
		int temp;
		cin >> temp;

		nums[temp]++;
	}

	for (int i=0; i<n; i++){
		cout << nums[i] << " ";
	}

}