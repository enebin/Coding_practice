#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib");

int main(void){
    PlaySound("C:\\Users\\Lee\\Documents\\GitHub\\Coding_practice\\Baek\\Bradinsky.wav", NULL, SND_ASYNC | SND_FILENAME );
    while(1){
        Sleep(1000);
    }

    return 0;
}