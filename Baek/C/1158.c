#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    struct Node* l;
    struct Node* r;
} node;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    node *p, *temp;
    p = (node*)calloc(n, sizeof(node));

    for (int i=0; i<n; i++){
        p[i].data = i+1;
        p[i].l = i ? & p[i-1] : &p[n-1];
        p[i].r = i+1 < n ? &p[i+1] : &p[0];
    }

    printf("<");

    temp = &p[n-1];
    int j = 0, t, d;
    while (j < n){
        t = k;
        while (t--)
            temp = temp -> r;
            
        d = temp -> data;
        printf(j++ ? ", %d" : "%d", d);

        temp -> l -> r = temp -> r;
        temp -> r -> l = temp -> l;

    }

    printf(">");
    free(p);    

    return 0;
}