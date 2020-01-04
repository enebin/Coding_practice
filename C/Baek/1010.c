#include <stdio.h>
#include <stdlib.h>

int calc(int n, int m){     // n, m을 매개변수로 받습니다.
    int result = 0;
    if (n == 1)             // n이 1일 때는 m을 그대로 리턴합니다. 
        return m;
    else if (n == 2){
        for (int i=1; i<=m-1; i++)  // n이 2일때 재귀호출이 마무리됩니다. 
            result += i;            // 따라서 result에 n이 2일 때의 케이스 개수를 넣어줍니다. 
        return result;              // 결과값 result를 리턴합니다. 
    }
    for (int i=1; i<=m-(n-1); i++){
        if (n-1 == 1) return 0;     // n-1이 1 일때는 0을 리턴합니다.
        result += calc(n-1, m-i);   // n-1, m-i인 경우로 함수를 재귀호출합니다. 
    }
    return result;
}

int main()
{       
    int iter;               // 테스트 케이스의 개수를 받습니다.
    scanf("%d", &iter);     

    for (int i=0; i<iter; i++){     // n과 m의 값을 반복하여 받습니다. 
        int n, m;

        scanf("%d %d", &n, &m);         
        printf("%d\n", calc(n, m)); // 받은 n, m 값을 이용하여 값을 계산합니다. 
    }

    return 0;
}