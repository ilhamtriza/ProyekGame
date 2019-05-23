//File		: Ilham_181511016.h
/*Deskripsi : Header buatan Ilham Triza Kurniawan (181511016)*/
#include "universal.h"
#include "Iqbal_181511022.h"
#include "Adhitya_181511002.h"
#include <time.h>

typedef struct gali{
	int waktu;
	int baris;
	int kolom;
}gali;

typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList {
	infotype info;
	address next;
} ElmtList;

void Show(int z[brs][klm]);	//Modul untuk menampilkan map beserta sprite isinya
void Menu(int map[brs][klm]);
void galiKiri(int map[brs][klm], int b, int k, int lv,int ng, char tomb);
//planning nanti coba pake queue
void galiKanan(int map[brs][klm], int b, int k, int lv,int ng, char tomb);
//planning nanti coba pake queue
double count_time(clock_t waktu);

void Create_Queue (address *p);
void Enque (address *p, address PNew, infotype *x);
infotype Deque (address *p);
