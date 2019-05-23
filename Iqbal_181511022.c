//File		: Iqbal_181511022.c

#include"Iqbal_181511022.h"

void change(int b, int k, int map[brs][klm], int n, int newFill)
{
	int jum;
	switch(newFill)
	{
		case 0 : {
			map[b][k] = 0;
			readimagefile("images//backgroundfix.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);
			break;
		}
		case 1 : {
			map[b][k] = 1;
			readimagefile("images//brick.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);
			break;
		}	
		case 3 : {
			map[b][k]=3;
			readimagefile("images//talifix.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);
			break;
		}
		case 4 : {
			map[b][k] = 4;
			readimagefile("images//tanggakosong.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);
			break;
		}
		case 9 : {
			map[b][k] = 9;
			readimagefile("images//pintu5.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);
			break;
		}
		case 30 : {
			map[b][k]=30;
			jum=n%2;
			switch(jum)
			{
				case 0 :readimagefile("images//taliorg1.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);break;
				case 1 :readimagefile("images//taliorg2.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);break;
			}
			break;
		}
		case 40 : {
			jum=n%2;
			map[b][k]=40;
			switch(jum)
			{
				case 0 :readimagefile("images//manjat1edit.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);break;
				case 1 :readimagefile("images//manjat2edit.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);break;
			}
			break;
		}
		case 47 : {
			map[b][k]==47;
			readimagefile("jln1tanggaleft.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);
			break;
		}
		case 71 : {//7 kiri
			map[b][k] = 7;
			jum = n%3;
			switch(jum)
			{
				case 0 : readimagefile("images//jln1l.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);break;
				case 1 : readimagefile("images//jln2l.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);break;
				case 2 : readimagefile("images//jln3l.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);break;
			}	
			break;
		}
		case 72 : {// 7 kanan
			
			map[b][k] = 7;
			jum = n%3;
			switch(jum)
			{
				case 0 : readimagefile("images//jln1r.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);break;
				case 1 : readimagefile("images//jln2r.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);break;
				case 2 : readimagefile("images//jln3r.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);break;
			}
			break;
		} 
		case 100 : {
			map[b][k] = 100;
			readimagefile("images//brick.jpg",0+kotak*k,0+kotak*b,kotak+kotak*k,kotak+kotak*b);
			break;
		}
	}
}

