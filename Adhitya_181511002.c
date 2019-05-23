//File 		: Adhitya_181511002.c
#include "Adhitya_181511002.h"

void game_over(int b, int k, int map[brs][klm]){
	cleardevice();
	settextstyle(2,0,20);
	outtextxy(625,325,"GAME   OVER" );
}

void score(int scr){
	char s[7];
	setbkcolor(3);
	settextstyle(3,0,15);
	sprintf(s, "%d", scr);
	outtextxy(220,600,s);
	outtextxy(0,600,"SCORE:");
}

void live(int lv){
	char l[6];
	setbkcolor(3);
	settextstyle(3,0,15);
	sprintf(l, "%d", lv);
	outtextxy(490,600,l);
	outtextxy(340,600,"LIFE:");
}

void treasure(int trs){
	char t[10];
	setbkcolor(3);
	settextstyle(3,0,15);
	sprintf(t, "%d", trs);
	outtextxy(920,600,t);
	outtextxy(600,600,"TREASURE:");
}
