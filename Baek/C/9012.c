#include <stdio.h>
#include <stdlib.h>

int co = 0;

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<iter; i++){
        char buf[51] = {0};
        scanf("%s", &buf);

        co = 0;
        for (int j=0; j<51; j++){
            if (buf[j] == '(')
                co++;
            else if (buf[j] == ')')
                co--;

            if (co < 0){
                printf("%s\n", "NO");
                break;
            }
        }
        
        if (co == 0)
            printf("%s\n", "YES");
        else if (co > 0) {
            printf("%s\n", "NO");
        }
    }

    

    return 0;
}