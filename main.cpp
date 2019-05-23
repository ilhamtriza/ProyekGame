#include "Ilham_181511016.h"
#include "Ichwan_181511046.h"
#include "Adhitya_181511002.h"
#include "Iqbal_181511022.h"
#include <process.h>
#include "Alya_181511038.h"
#include <MMSystem.h> //untuk sound
#pragma comment<lib, "winmm.lib">
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void galiKiri(void *arg);
void galiKanan(void *arg);
void semula(int *map[brs][klm]);

	int map[brs][klm]={
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
{1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1},
{1, 4, 0, 0, 0, 8, 0, 0, 0, 0, 0, 1, 1, 1, 4, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1},
{1, 1, 1, 1, 1, 1, 1, 1, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 8, 1},
{1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 1, 1, 1, 1, 1},
{1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 1},
{1, 0, 0, 0, 0, 4, 1, 1, 1, 2, 2, 2, 1, 1, 1, 4, 0, 0, 0, 4, 0, 0, 0, 0, 1},
{1, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 0, 1},
{1, 1, 1, 1, 1, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 0, 0, 8, 4, 0, 0, 0, 8, 1},
{1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1},
{1, 0, 0, 0, 0, 4, 1, 1, 1, 1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 1},
{1, 0, 0, 0, 0, 4, 1, 1, 1, 1, 1, 1, 1, 1, 7, 4, 0, 0, 0, 0, 0, 0, 0, 0, 1},
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};
int mapLv2[brs][klm]=
{
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 1},
	{1, 4, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 4, 0, 1},
	{1, 4, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 4, 0, 1},
	{1, 4, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 1},
	{1, 4, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 8, 0, 0, 0, 8, 4, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 4, 3, 3, 3, 3, 3, 3, 3, 4, 1, 1, 1, 1, 4, 2, 2, 2, 1},
	{1, 1, 1, 1, 1, 1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 0, 0, 4, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 4, 0, 0, 8, 1},
	{1, 1, 1, 1, 1, 0, 0, 4, 0, 0, 4, 1, 1, 1, 1, 1, 4, 0, 0, 0, 4, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 4, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 4, 0, 0, 4, 0, 0, 0, 7, 0, 4, 0, 0, 0, 4, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};


int b,k,n;
int scr = 0,lv = 5,trs = 8;

int main() {
	
	//coba1
	//coba
	initwindow(kotakmenu*klm,kotakmenu*brs,"Test");
	loading();
	Menu(map);
}

void gerak(int map[brs][klm])
{
	int posisi,posisiBawah;
	char ch;
	b=11;
	k=14;
	n=0;
	if(trs == 0){
		trs = 8;
	}
	if(lv == -1){
		lv = 5;
	}
	while (1)
	{
		score(scr);
		live(lv);
		treasure(trs);
		n++;
		nextLevel(b,k,map,n,trs);
		if(map[b][k] == 9){
			levelUp(mapLv2);
			gerak(mapLv2);
		}
		ch=getch();
			switch(ch){
			case 's'://move down
			{
				if((b>=0)&&(b<=13))
				{
					b=choosewayDown(b,k,map,n);
					while((map[b+1][k] == 8) || (map[b+1][k] == 0)){//ichwan
					if((map[b][k] == 40) || (map[b][k] == 30)){
						break;
					}
					if(map[b+1][k]==8){
						change(b,k,map,n,0);
						b++;
						trs--;
						scr++;
						change(b,k,map,n,72);
					}
					b=jatuh(b,k,map,n);
				}	
				}
			
				break;
			}
			case 'w'://moveup
			{
				if((b>=0)&&(b<=13))
				{
					b=choosewayUp(b,k,map,n);
				}
				
				break;
			}
			case 'a'://move left
			{
				if((k>=0)&&(k<=26))
				{
				if(map[b][k-1] == 8){//ichwan
					scr++;
					trs--;
				}
				k=choosewayLeft(b,k,map,n);
				posisi=map[b][k];
				printf("%d",posisi);
				posisiBawah=map[b+1][k];
				printf("%d",posisiBawah);
				if(posisi == 7){
					switch(posisiBawah){
						case 0:{
							b=jatuh(b,k,map,n);
							while((map[b+1][k] == 8) || (map[b+1][k] == 0)){//ichwan
								if(map[b+1][k]==8){
									change(b,k,map,n,0);
									b++;
									trs--;
									scr++;
									change(b,k,map,n,72);
								}
								b=jatuh(b,k,map,n);
							}
							break;
						}
						case 3:{
							b=jatuh(b,k,map,n);
							change(b,k,map,n,0);b++;change(b,k,map,n,30);
							break;
						}
					}
				}					
				}

				break;
			}
			case 'd'://move right
			{
				if((k>=0)&&(k<=26))
				{
						k=choosewayRight(b,k,map,n);
				posisi=map[b][k];
				printf("%d",posisi);
				posisiBawah=map[b+1][k];
				printf("%d",posisiBawah);
				if(posisi == 7){
					switch(posisiBawah){
						case 0:{
							b=jatuh(b,k,map,n);
							while((map[b+1][k] == 8) || (map[b+1][k] == 0)){//ichwan
								if(map[b+1][k]==8){
									change(b,k,map,n,0);
									b++;
									trs--;
									scr++;
									change(b,k,map,n,72);
								}
								b=jatuh(b,k,map,n);
							}
							break;
						}
						case 3:{
							b=jatuh(b,k,map,n);
							change(b,k,map,n,0);b++;change(b,k,map,n,30);
							break;
						}
					}
				}
				}
				if(map[b][k+1] == 8){
					scr++;
					trs--;
				}			
				break;
			}
			
			case 'z':	//menekan z untuk menggali kiri
			_beginthread(galiKiri,0,NULL);//menggunakan multi-threading agar ketika menggali karakter bisa bergerak
			break;
			
			case 'c'://menekan c untuk menggali
			_beginthread(galiKanan,0,NULL);//menggunakan multi-threading agar ketika menggali karakter bisa bergerak
			break;
		} 
	}
}


void galiKiri(void *arg){
	int x,y,temp;
	
	if((map[b+1][k-1]==1)&&(map[b][k-1]==0)){
		x=b+1;
		y=k-1;
		change(x,y,map,n,0);
		delay(3000);
		if (map[x][y]==7)
		{
			temp = map[b+1][k];
			change(x,y,map,n,100);
			if(lv == 0){
				game_over(x,y,map);
				delay(1000);
				map[b][k] = 1;
				map[11][14] = 7;
				lv--;
				map[1][11] = 8;
				map[1][17] = 8;
				map[2][5] = 8;
				map[5][10] = 8;
				map[7][3] = 8;
				map[8][17] = 8;
				map[8][23] = 8;
				map[3][23] = 8;
				scr = 0;
				trs = 8;
				Menu(map);
			}
			lv--;
			map[b][k] = 1;
			map[11][14] = 7;
			Show(map);
			gerak(map);
		}
		else
		{
			change(x,y,map,n,1);// akan kembali menjadi bata
		}
	}
	_endthread();
}

void galiKanan(void *arg){
	int x,y, temp;
	if((map[b+1][k+1]==1)&&(map[b][k+1]==0)){
		x=b+1;
		y=k+1;
		change(x,y,map,n,0);//diubah menjadi bar
		delay(3000);
		if (map[x][y]==7)
		{
			change(x,y,map,n,100);
			
			if(lv == 0){
				game_over(x,y,map);
				delay(1000);
				map[b][k] = 1;
				map[11][14] = 7;
				lv--;
				map[1][11] = 8;
				map[1][17] = 8;
				map[2][5] = 8;
				map[5][10] = 8;
				map[7][3] = 8;
				map[8][17] = 8;
				map[8][23] = 8;
				map[3][23] = 8;
				scr = 0;
				trs = 8;
				Menu(map);
			}
			lv--;
			map[b][k] = 1;
			map[11][14] = 7;
			Show(map);
			gerak(map);
		}
		else
		{
			change(x,y,map,n,1);// akan kembali menjadi bata
		}
	}
	_endthread();
}

