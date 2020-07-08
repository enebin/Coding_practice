#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int fortune_teller(string str){
    char num_buf[6];
    char buf; 
    int idx = 0;
    int result = 0;
    bool flag = 0; 

    for (int i=0; i<str.length(); i++){       
        if (str[i] != '+' && str[i] != '-' && str[i] != '.'){
            num_buf[idx++] = str[i];            
        }
        else{
            num_buf[idx] = '\n';
            idx = 0;           

            int new_rule = atoi(num_buf);

            if (str[i] == '-')
                flag = 1;
            else 
                flag = 0;

            if (flag == 1 && str[i] == '+')
                result -= new_rule;
            else if (flag == 1 && str[i] == '-')
                result -= new_rule;
            else if (flag == 0 && str[i] == '+')
                result += new_rule;
            else 
                result -= new_rule;
        }       
        cout << result << endl;

    }
    cout << result << endl;
}


int main(){
    //
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      //

    string str;
    cin >> str;

    str += '.';

    fortune_teller(str);
}
