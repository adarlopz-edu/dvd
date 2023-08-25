#include<stdio.h>
#include<conio.h>
#include<windows.h>

void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

int main() {
    int x = 1, y = 1, k = 1, l = 1;

    do {
        system("cls");
        gotoxy(x, y);
        printf("DVD");
        x = x + k;
        y = y + l;
        Sleep(50);
        if (x == 80 || x == 1) { k = -k; }
        if (y == 1 || y == 25) { l = -l; }
    } while (1 == 1);

}