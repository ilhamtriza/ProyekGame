//File		: Ilham_181511016.c

#include "Ilham_181511016.h"
#include "Alya_181511038.h"




void Show(int z[brs][klm])
{
	typedef struct start{
		int x;
		int y;
	}start1;
	start1 start2;
	getmouseclick(WM_LBUTTONDOWN,start2.x,start2.y);
		if (start2.x != -1 && start2.y != -1){
			printf("x: %d\n",start2.x);
			printf("y: %d\n",start2.y);
		}
	for(int i=0;i<brs;i++)
	{
		for(int j=0;j<klm;j++)
		{
			if (z[i][j] == 0)
			{
				readimagefile("images//backgroundfix.jpg",0+kotak*j,0+kotak*i,kotak+kotak*j,kotak+kotak*i);
			}
			if (z[i][j] == 1)
			{
				readimagefile("images//brick.jpg",0+kotak*j,0+kotak*i,kotak+kotak*j,kotak+kotak*i);
			}
			if (z[i][j] == 2)
			{
				readimagefile("images//bricks2.jpg",0+kotak*j,0+kotak*i,kotak+kotak*j,kotak+kotak*i);
			}
			if (z[i][j] == 3)
			{
				readimagefile("images//talifix.jpg",0+kotak*j,0+kotak*i,kotak+kotak*j,kotak+kotak*i);
			}
			if (z[i][j] == 4)
			{
				readimagefile("images//tanggakosong.jpg",0+kotak*j,0+kotak*i,kotak+kotak*j,kotak+kotak*i);
			}
			if (z[i][j] == 7)
			{
				readimagefile("images//jln1r.jpg",0+kotak*j,0+kotak*i,kotak+kotak*j,kotak+kotak*i);
			}
			if (z[i][j] == 8)
			{
				readimagefile("images//cube.jpg",0+kotak*j,0+kotak*i,kotak+kotak*j,kotak+kotak*i);
			}
		}
	}
}

void Menu(int map[brs][klm])
{
	typedef struct start{
		int x;
		int y;
	}start1;
	start1 start2;
	while(1)
	{
		readimagefile("images//menu.jpg",0,0,kotakmenu*klm,kotakmenu*brs);
		getmouseclick(WM_LBUTTONDOWN,start2.x,start2.y);
		if (start2.x != -1 && start2.y != -1){
			printf("x: %d\n",start2.x);
			printf("y: %d\n",start2.y);
		}
		if((start2.x>=9*kotakmenu-12)&&(start2.x<=16*kotakmenu-7)&&(start2.y>=2*kotakmenu-7)&&(start2.y<=3*kotakmenu-7))//start
		{
			readimagefile("images//backgroundfix.jpg",0,0,kotakmenu*klm,kotakmenu*brs);
			Show(map);
			gerak(map);
			while (1)
			{
				if (start2.x != -1 && start2.y != -1){
				printf("x: %d\n",start2.x);
				printf("y: %d\n",start2.y);
				}
			}
		}		
		if((start2.x>=6*kotakmenu-25)&&(start2.x<=19*kotakmenu+10)&&(start2.y>=4*kotakmenu-7)&&(start2.y<=5*kotakmenu-7))
		{
			while(1)
			{
				readimagefile("images//highscorefix.jpg",0,0,kotakmenu*klm,kotakmenu*brs);
				getmouseclick(WM_LBUTTONDOWN,start2.x,start2.y);
				if((start2.x>=kotakmenu-3)&&(start2.x<=7*kotakmenu-3)&&(start2.y>=12*kotakmenu-20+10)&&(start2.y<=13*kotakmenu-32))//highscore
				{
					Menu(map);
				}
				if (start2.x != -1 && start2.y != -1){
					printf("x: %d\n",start2.x);
					printf("y: %d\n",start2.y);
				}
			}
			
		}
		if((start2.x>=7*kotakmenu-20)&&(start2.x<=18*kotakmenu)&&(start2.y>=8*kotakmenu-10)&&(start2.y<=9*kotakmenu-10))
		{
			while(1)
			{
				readimagefile("images//about usfix.jpg",0,0,kotakmenu*klm,kotakmenu*brs);
				getmouseclick(WM_LBUTTONDOWN,start2.x,start2.y);
				if((start2.x>=kotakmenu-3)&&(start2.x<=7*kotakmenu-3)&&(start2.y>=12*kotakmenu-10)&&(start2.y<=13*kotakmenu-32))//menu
				{
					Menu(map);
				}
				if (start2.x != -1 && start2.y != -1){
					printf("x: %d\n",start2.x);
					printf("y: %d\n",start2.y);
				}
				
			}
		}	
		if((start2.x>=4*kotakmenu+15)&&(start2.x<=20*kotakmenu+20)&&(start2.y>=6*kotakmenu-10)&&(start2.y<=7*kotakmenu-10))
		{
			while(1)
			{
				readimagefile("images//how to playfix.jpg",0,0,kotakmenu*klm,kotakmenu*brs);
				getmouseclick(WM_LBUTTONDOWN,start2.x,start2.y);
				if((start2.x>=kotakmenu-3)&&(start2.x<=7*kotakmenu-3)&&(start2.y>=12*kotakmenu-30)&&(start2.y<=13*kotakmenu-32))//menu
				{
					Menu(map);
				}
				if (start2.x != -1 && start2.y != -1){
					printf("x: %d\n",start2.x);
					printf("y: %d\n",start2.y);
				}
			}
		}
		if ((start2.x>=4*kotakmenu+15)&&(start2.x<=20*kotakmenu+20)&&(start2.y>=6*kotakmenu-10)&&(start2.y<=7*kotakmenu-10))
		{
			
		}
	}
	
}

void galiKanan(int map[brs][klm], int b, int k, int lv,int ng,char tomb){
	//planning nanti coba pake queue
	address Head,Baru;
	int x,y,temp;
	double taken;
	clock_t waktu;
	gali g;
	
	clock_t end;
		
//	Create_Queue(&Head);
	
	//Menyimpan koordinat untuk digali dan disimpan di variabel baru
	g.baris=b+1;
	g.kolom=k+1;
	
	//memulai inisiasi waktu ketika tombol mulai dipencet lalu dimasukkan kedalam queue
	if (tomb=='c'){
		
//		Enque(&Head,Baru,&map[x][y]);
		change(g.baris,g.kolom,map,ng,0);//mengubah ke bata ke bentuk bar
		
	}
//	double time_start = (double)(waktu)/CLOCKS_PER_SEC;
//	if (time_start > 0 ){
//		printf("aso\n");
//		taken = count_time(waktu);
//	}
//	if (taken > 3 + time_start){
//		printf("jancok\n");
//		change(g.baris,g.kolom,map,ng,100);	
//	}
	
	
//	double time_start = (double)(begin)/CLOCKS_PER_SEC;
	//menghitung waktu jika selang waktu setelah tombol dipencet sudah 3 detik bar akan kembaali lagi ke bentuk bata
//	while(time_taken <= 3+time_start){
//		begin = clock() - begin;
//		time_taken = (double)(begin)/CLOCKS_PER_SEC;
//		if(time_taken > 3+time_start){
//			temp=Deque(&Head);
//										  
//		}
//	}

//	int x,y, temp;
//	if((map[b+1][k+1]==1)&&(map[b][k+1]==0)){
//		x=b+1;
//		y=k+1;
//		change(x,y,map,n,0);//diubah menjadi bar
//		delay(3000);
//		if (map[x][y]==7)
//		{
//			change(x,y,map,n,100);
//			
//			if(lv == 0){
//				game_over(x,y,map);
//				delay(1000);
//				map[b][k] = 1;
//				map[11][14] = 7;
//				lv--;
//				map[1][11] = 8;
//				map[1][17] = 8;
//				map[2][5] = 8;
//				map[5][10] = 8;
//				map[7][3] = 8;
//				map[8][17] = 8;
//				map[8][23] = 8;
//				map[3][23] = 8;
//				scr = 0;
//				trs = 8;
//				Menu(map);
//			}
//			lv--;
//			map[b][k] = 1;
//			map[11][14] = 7;
//			Show(map);
//			gerak(map);
//		}
//		else
//		{
//			change(x,y,map,n,1);// akan kembali menjadi bata
//		}
//	}
}

void galiKiri(int map[brs][klm], int b, int k, int lv,int ng, char tomb){
	address Head, Baru;
	int x,y,temp;
	
	gali g;
	clock_t waktu;
	clock_t end;
	double taken;
	
//	Create_Queue(&Head);
	
	//Menyimpan koordinat untuk digali dan disimpan di variabel baru
	g.baris=b+1;
	g.kolom=k-1;
	
	//memulai inisiasi waktu ketika tombol mulai dipencet lalu dimasukkan kedalam queue
	if (tomb=='z'){
		waktu = clock();
//		Enque(&Head,Baru,&map[x][y]);
		change(g.baris,g.kolom,map,ng,0);//mengubah ke bata ke bentuk bar

	}
	
//	double time_start = (double)(waktu)/CLOCKS_PER_SEC;
//	printf("%f",time_start);
//	if (time_start > 0 ){
//		printf("aso\n");
//		taken=count_time(waktu);
//		printf("taken: %f\n",taken);
//	}
//	printf("time_start: %f",time_start);
//	if ( time_start > (5 + taken) ){
//		printf("jancok\n");
//		change(g.baris,g.kolom,map,ng,100);	
//	}
	
//	double time_start = (double)(begin)/CLOCKS_PER_SEC;
//	menghitung waktu jika selang waktu setelah tombol dipencet sudah 3 detik bar akan kembaali lagi ke bentuk bata
//	while(time_taken <= 3+time_start){
//		begin = clock() - begin;
//		time_taken = (double)(begin)/CLOCKS_PER_SEC;
//		if(time_taken > 3+time_start){
//			temp=Deque(&Head);
//			change(g.baris,g.kolom,map,ng,100);
//		}
//	}

//	while (1){
//		if (kbhit()){
//			gerak(map[b][k]);
//			switch (tomb){
//				case 'z':
//					g.baris = b+1;
//					g.kolom = k-1;
//					break;
//		}
//	}
	
//	if((map[b+1][k-1]==1)&&(map[b][k-1]==0)){
//		x=b+1;
//		y=k-1;
//		change(x,y,map,n,0);
//		delay(3000);
//		if (map[x][y]==7)
//		{
//			temp = map[b+1][k];
//			change(x,y,map,n,100);
//			if(lv == 0){
//				game_over(x,y,map);
//				delay(1000);
//				map[b][k] = 1;
//				map[11][14] = 7;
//				lv--;
//				map[1][11] = 8;
//				map[1][17] = 8;
//				map[2][5] = 8;
//				map[5][10] = 8;
//				map[7][3] = 8;
//				map[8][17] = 8;
//				map[8][23] = 8;
//				map[3][23] = 8;
//				scr = 0;
//				trs = 8;
//				Menu(map);
//			}
//			lv--;
//			map[b][k] = 1;
//			map[11][14] = 7;
//			Show(map);
//			gerak(map);
//		}
//		else
//		{
//			change(x,y,map,n,1);// akan kembali menjadi bata
//		}
//	}
}

double count_time(clock_t waktu){
	double time_taken;
	
	waktu = clock() - waktu;
	time_taken = (double)(waktu)/CLOCKS_PER_SEC;
	printf("apa\n");
	printf("%f",time_taken);
	return time_taken;
}

void Create_Queue(address *p){
// Tujuan : memesan memory dengan alokasi dinamis
// Jika berhasil mengirimkan address, dan jika gagal mengirimkan NULL
// Parameter : P (parameter Output)

	*p = (address) malloc(sizeof (ElmtList));
}

void Enque (address *p, address PNew, infotype *x){
/* Tujuan : menambahkan elemen list (PNew) di akhir LinkedList */
/* IS : p mungkin Kosong */
/* FS : menyambungkan elemen baru (PNew) di akhir Linked List */

	address q=*p;
	while(q->next != NULL){
		q = q->next;
	}
	q->next= PNew;
	q = PNew;
	q->info = *x;
}

infotype Deque (address *p){
/* IS : P TIDAK Kosong */
/* FS : Elemen pertama List dihapus, nilai info disimpan ke X */
/* dan alamat elemen pertama di dealokasi */

	address del;
	infotype X;
	
	del = *p;
	
	if(del != NULL)
	{
		X = del->info;
		del = del->next;
		free(del);
	}
	return (X);
}

