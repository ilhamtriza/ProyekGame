//File 		: Alya_181511038.h
//Nama		: Alya Maharani P.J (181511038)
//Deskripsi	: Modul untuk perubahan pergerakan karakter

#include "universal.h"
#include <time.h>

void nextLevel(int b, int k, int map[brs][klm], int n, int trs);
void levelUp(int map[brs][klm]);
void loading();
void gerak(int map[brs][klm]);
int choosewayDown(int b, int k, int map[brs][klm], int n);
int outputDown40(int b, int k, int map[brs][klm], int posisiBawah, int n);
int outputDown7(int b, int k, int map[brs][klm], int posisiBawah, int n);
int outputDown30(int b, int k, int map[brs][klm], int posisiBawah, int n);
int jatuh(int b, int k, int map[brs][klm], int n);
int choosewayUp(int b, int k, int map[brs][klm], int n);
int outputUp40(int b, int k, int map[brs][klm], int posisiAtas, int n);
int outputUp30(int b, int k, int map[brs][klm], int posisiAtas, int n);


