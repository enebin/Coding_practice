#include <stdio.h>
#include <math.h>

#define STEP 100000

float loc1[4];
float loc2[4];

float distance(float x1, float y1, float x2, float y2){
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

void devider(int location[]){
    float new_x = (location[0] + location[2]) / 2;
    float new_y = (location[1] + location[3]) / 2;
}

int main()
{
    for(int i=0; i<4; i++){
        scanf("%f", &loc1[i]);
    }
    for(int i=0; i<4; i++){
        scanf("%f", &loc2[i]);
    }

    float i1 = distance(loc1[0], loc1[2], loc1[1], loc1[3]);
    float i2 = distance(loc2[0], loc2[2], loc2[1], loc2[3]);

    float init = i1 < i2 ? i1 : i2;

    float start[2];
    float end[2];
    
    while (start[0] <= end[0]){

        float dist = distance(start[0], end[0], start[1], end[1]);

        if (init < dist){
            start[0] = (loc1[0] + loc1[2]) / 2;
            start[1] = (loc1[1] + loc1[3]) / 2;
        }
        else{
            end[0] = (loc2[0] + loc2[2]) / 2;
            end[1] = (loc2[1] + loc2[3]) / 2;

        }
    }

    printf("%f", distance(start[0], end[0], start[1], end[1]));
    return 0;
}   