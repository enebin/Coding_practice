#include <iostream>

using namespace std;

int comp_pos(const void* x, const void* y){
    int a = *(int*)x;
    int b = *(int*)y;

    return a > b ? 1 : -1;
}

int comp_neg(const void* x, const void* y){
    int a = *(int*)x;
    int b = *(int*)y;

    return a < b ? 1 : -1;
}

int cal_routine (int i, int nums[]){
    int result = 0;

    /*for (int n=0; n<i; n++)
        cout << nums[n] << " " << endl;*/

    if (i == 0)
        return 0;
    else if (!(i % 2)){
        i--;
        while (i >= 0){
            if (nums[i-1]==1){
                result += nums[i] + nums[i-1];
                i -= 2;
            }
            result += nums[i] * nums[i-1];
            i -= 2;
        }
    }
    else{
        i--;
        while (i >= 0){    
            if (i == 0)
                return result += nums[0];
            if (nums[i-1]==1){
                result += nums[i] + nums[i-1];
                i -= 2;
            }
            else {
                result += nums[i] * nums[i-1];
                i -= 2;
            }
        }
    }
    return result;
}

int main(){
    int iter;
    cin >> iter;
    
    int nums_pos[10001];
    int nums_neg[10001];
    
    int temp;
    int x=0, y=0;
    for (int i=0; i<iter; i++){
        cin >> temp;
        if (temp <= 0)
            nums_neg[x++] = temp;
        else
            nums_pos[y++] = temp;
    }
    
    if (x > 0)
        qsort(nums_neg, x, sizeof(int), comp_neg);
    if (y > 0)
        qsort(nums_pos, y, sizeof(int), comp_pos);

    int result = cal_routine(x, nums_neg) + cal_routine(y, nums_pos);
    
    cout << result << endl;
}