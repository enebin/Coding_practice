#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int r;
    cin >> r;

    double x = 2*r*r;
    double y = M_PI *r*r;

    printf("%lf\n%lf", y, x);
}
