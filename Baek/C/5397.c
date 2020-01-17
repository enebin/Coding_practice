#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buffer [1000001];
char stack_p[1000001] = {0, };
char stack_l[1000001] = {0, };

enum command{
    left = 0,
    right,
    back
};

int hasta(char x){
    if (x == '<')
        return left;
    else if (x == '>')
        return right;
    else if (x == '-')
        return back;  
    else 
        return x;  
}

void push(char* stack, char l, int cursor){
    stack[cursor] = l;
}

char pop(char* stack, int cursor){
    return stack[cursor];
}

int main()
{
    int iter = 1;
    //scanf("%d", &iter);

    for(int i=0; i<iter; i++){
       // scanf("%s", buffer);
        strcpy(buffer, "hei<<c--py");
        int len = strlen(buffer);
            
        enum command com;
        int cursor_p = 0;
        int cursor_l = 0;


        for (int j=0; j<len; j++){
            com = hasta(buffer[j]);

            switch (com) {
                case left:
                    if (cursor_p == 0)
                        continue;
                    else{         
                        char tmp = pop(stack_p, cursor_p-1);
                        push(stack_l, tmp, cursor_l);
                        cursor_l++; cursor_p--;
                    }
                    break;
                
                case right:
                    if (cursor_p == len)
                        continue;
                    else{ 
                        char tmp = pop(stack_l, cursor_l-1);
                        push(stack_p, tmp, cursor_p);
                        cursor_p++; cursor_l--;
                    }
                    break;
                
                case back:
                    if (cursor_p == 0)
                        continue;
                    else{
                        pop(stack_p, cursor_p-1);
                        cursor_p-=1;
                    }
                    break;

                default:{
                    push(stack_p, com, cursor_p);
                    cursor_p++;
                }
                    break;
            }
        }


        for (int k=cursor_l-1; k>=0; k--)
            stack_p[cursor_l - cursor_l + 1 + k] = stack_l[k];
        
        for (int k=0; k<cursor_l+cursor_l; k++)
            printf("%c", stack_l);
    }
    printf("\n");

    return 0;
}