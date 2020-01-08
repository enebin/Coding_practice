#include <stdio.h>
#include <stdlib.h>

int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char* date[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main()
{
    int month;
    int day_i;
    int prod = -1;
    scanf("%d %d", &month, &day_i);

    for (int i=1; i<month; i++){
        prod += day[i-1];
    }
    prod += day_i;
    printf("%s\n", date[prod % 7]);
    
    return 0;
}