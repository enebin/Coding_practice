#include <stdio.h>
#include <stdlib.h>

int l = 0, c = 0, s = 0, n = 0;
char la;

enum hasta{
    small = 0,
    capita,
    space,
    number
};

int terminator(int s){
    if (s>=64 && s<=90)
        return capita;
    else if (s>=97 && s<=122)
        return small;
    else if (s>=48 && s<=57)
        return number;
    else if (s == 32)
        return space;
}

int main()
{
    while(1){
        while (1){
            la = getchar();
            if (la == '\n'){
                break;
            }
            else if (la == EOF)
                break;

            enum hasta hasta;
            hasta = terminator(la);

            switch (hasta) {
                case small:
                    l++;
                    break;
                case capita:
                    c++;
                    break;
                case space:
                    s++;
                    break;
                case number:
                    n++;
                    break;            
                default:
                    break;
            }
        }
    
    if (la == EOF)
        break;
        
    printf("%d %d %d %d\n", l, c, n, s);
    l = 0; c = 0; s = 0; n = 0;

    }


    return 0;
}