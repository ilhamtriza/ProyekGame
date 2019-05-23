/*	nama file		:	Ichwan_181511046.h
	deskripsi		:	header sebagai prototype untuk modul
	dibuat oleh		:	ichwan latif / 181511046
	last update		:	31/03/2019
	*/
#include "universal.h"

void hitung(int *b, int k, int map[brs][klm], int n, int *skor, int *treasure);
int choosewayRight(int b, int k, int map[brs][klm], int n);
int outputRight40(int b, int k, int map[brs][klm], int posisiKanan, int n);
int outputRight30(int b, int k, int map[brs][klm], int posisiKanan, int n);
int outputRight7(int b, int k, int map[brs][klm], int posisiKanan, int n);
int choosewayLeft(int b, int k, int map[brs][klm], int n);
int outputLeft40(int b, int k, int map[brs][klm], int posisiKiri, int n);
int outputLeft30(int b, int k, int map[brs][klm], int posisiKiri, int n);
int outputLeft7(int b, int k, int map[brs][klm], int posisiKiri, int n);
