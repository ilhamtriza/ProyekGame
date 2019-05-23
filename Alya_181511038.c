//File 		: naik.cpp 
//Nama		: Alya Maharani P.J (181511038)
//Deskripsi	: Modul untuk gerak ke bawah, saat user menekan tombol w
#include "Alya_181511038.h"
#include "Ilham_181511016.h"
#include "Iqbal_181511022.h"

int choosewayUp(int b, int k, int map[brs][klm], int n)
//Modul ini akan dipanggil saat user menekan tombol down
//variabel posisi adalah penampung dari isi map[b][k]
//Variabel posisibawah adalah penampung dari nilai yang dikembalikan oleh function checkmapsebelah
{
	int posisi,posisiAtas;
	posisi=map[b][k];
	printf("%d",posisi);
	posisiAtas=map[b-1][k];
	printf("%d",posisiAtas);
	switch(posisi)
	{
		case 40 : b=outputUp40(b,k,map,posisiAtas,n);break;
		//Jika karakter sedang memanjat tangga, maka yang akan dipanggil adalah modul outputdown40
		case 30 :b=outputUp30(b,k,map,posisiAtas,n);break;
		//Jika karakter sedang ada di tali, maka yang akan dipanggil adalah modul outputdown30
	}
	return b;//Modul ini akan mengembalikan suatu nilai baris yang telah diproses
}

int outputUp40(int b, int k, int map[brs][klm], int posisiAtas, int n)
//Modul ini berfungsi menghasilkan pergerakan karakter ketika sedang di tangga 
{
	switch(posisiAtas)
	{
		case 4 : change(b,k,map,n,4);b--;change(b,k,map,n,40);break;
		//Jika isi posisi bawah karakter tangga
		case 0 : change(b,k,map,n,4);b--;change(b,k,map,n,72);break;
		case 9 : change(b,k,map,n,4);b--;change(b,k,map,n,72); map[b][k] = 9; break;
	}
	return b;
}

int outputUp30(int b, int k, int map[brs][klm], int posisiAtas, int n)
//Modul ini berfungsi menghasilkan pergerakan karakter ketika sedang di tangga 
{
	switch(posisiAtas)
	{
		case 4 :	change(b,k,map,n,3);b--;change(b,k,map,n,40);break;
		//Jika isi posisi bawah karakter tangga
	}
	return b;
}

int choosewayDown(int b, int k, int map[brs][klm], int n)
//Modul ini akan dipanggil saat user menekan tombol down
//variabel posisi adalah penampung dari isi map[b][k]
//Variabel posisibawah adalah penampung dari nilai yang dikembalikan oleh function checkmapsebelah
{
	int posisi,posisiBawah;
	posisi=map[b][k];
	printf("%d",posisi);
	posisiBawah=map[b+1][k];
	printf("%d",posisiBawah);
	switch(posisi)
	{
		case 40 : b=outputDown40(b,k,map,posisiBawah,n);break;
		//Jika karakter sedang memanjat tangga, maka yang akan dipanggil adalah modul outputdown40
		case 7 : b=outputDown7(b,k,map,posisiBawah,n);break;
		//Jika karakter sedang berjalan biasa di atas bata, maka yang akan dipanggil adalah modul outputdown7 
		case 30 :b=outputDown30(b,k,map,posisiBawah,n);break;
		//Jika karakter sedang ada di tali, maka yang akan dipanggil adalah modul outputdown30
	}
	return b;//Modul ini akan mengembalikan suatu nilai baris yang telah diproses
}

int outputDown40(int b, int k, int map[brs][klm], int posisiBawah, int n)
//Modul ini berfungsi menghasilkan pergerakan karakter ketika sedang di tangga 
{
	switch(posisiBawah)
	{
		case 4 :	change(b,k,map,n,4);b++;change(b,k,map,n,40);break;
		//Jika isi posisi bawah karakter tangga
		case 0 	:	change(b,k,map,n,4);b++;change(b,k,map,n,72);break;
		//Jika isi posisi bawah karakter kosong
		case 3 	:	change(b,k,map,n,4);b++;change(b,k,map,n,30);;break;
		//Jika posisi bawah karakter tali
	}
	return b;
}

int outputDown7(int b, int k, int map[brs][klm], int posisiBawah, int n)
//Modul ini berfungsi menghasilkan pergerakan karakter ketika sedang berjalan biasa di tanah
{
	switch(posisiBawah)
	{
		case 4 :change(b,k,map,n,0);b++;change(b,k,map,n,40);break;
		//Jika di bawah posisi karakter ada tangga
	}
	return b;
}

int outputDown30(int b, int k, int map[brs][klm], int posisiBawah, int n)
//Modul ini berfungsi menghasilkan pergerakan karakter ketika sedang di tali 
{
	switch(posisiBawah)
	{
		case 4 : change(b,k,map,n,3);b++;change(b,k,map,n,40);break;
		//Jika di bawah posisi karakter ada tangga
		case 0  : change(b,k,map,n,3);b++;change(b,k,map,n,72);//ganti jadi karakter
		b=jatuh(b,k,map,n);break;
		//Jika di bawah posisi karakter kosong, maka karakter akan jatuh
	}
	return b;
}

int jatuh(int b, int k, int map[brs][klm], int n)
//modul yang berfungsi mengatur pergerakan jatuh ketika karakter sedang berada di tali
{
	while((map[b+1][k]==0) && (b <= 11))//looping untukk turun dengan jatuh
	{
		delay(75);
		change(b,k,map,n,0);//ganti posisi awal karakter dengan 0, 0 berarti kosong
		b++;//turun satu baris
		change(b,k,map,n,72);
		//ganti posisi satu baris dari posisi awal karakter dengan 7, 7 berarti karakter dengan background 0	
	}
	return b;//mengembalikan nilai baris agar posisi terupdate
}




void loading()
{
	int x=410,i;
	readimagefile("images//welcome screen.jpg",0,0,klm*kotakmenu,brs*kotakmenu);
	for(i=0;i<400;++i)
	{
		delay(10);
		line(x,450,x,500);
		x++;
	}
	getch();
}

void nextLevel(int b, int k, int map[brs][klm], int n, int trs)
{
	if (trs==0)
	{
		change(0,1,map,n,9);
	}
}

void levelUp(int mapLv2[brs][klm])
{
	readimagefile("images//backgroundfix.jpg",0,0,kotakmenu*klm,kotakmenu*brs);
	Show(mapLv2);
}


