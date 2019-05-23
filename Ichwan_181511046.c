#include "Alya_181511038.h"
#include "Ichwan_181511046.h"
#include "Iqbal_181511022.h"
#include "universal.h"
/*
	Nama file		:	ichwan181511046.cpp
	deskripsi		:	modul untuk menentukan skor dan pengambilan treasure pada game
						dan layout pada game
	dibuat oleh		:	Ichwan Latif	/	181511046
	last update		:	30/03/2019
*/


void skor(int skoor){
	skoor++;
}



int choosewayLeft(int b, int k, int map[brs][klm], int n)
//Modul ini akan dipanggil saat user menekan tombol down
//variabel posisi adalah penampung dari isi map[b][k]
//Variabel posisibawah adalah penampung dari nilai yang dikembalikan oleh function checkmapsebelah
{
	int posisi,posisiKiri;
	posisi=map[b][k];
	printf("%d",posisi);
	posisiKiri=map[b][k-1];
	printf("%d",posisiKiri);
	switch(posisi)
	{
		case 40 : k=outputLeft40(b,k,map,posisiKiri,n);break;
		//Jika karakter sedang memanjat tangga, maka yang akan dipanggil adalah modul outputdown40
		case 7 : k=outputLeft7(b,k,map,posisiKiri,n);break;
		//Jika karakter sedang berjalan biasa di atas bata, maka yang akan dipanggil adalah modul outputdown7 
		case 30 : k=outputLeft30(b,k,map,posisiKiri,n);break;
		//Jika karakter sedang ada di tali, maka yang akan dipanggil adalah modul outputdown30
	}
	return k;//Modul ini akan mengembalikan suatu nilai baris yang telah diproses
}

int outputLeft40(int b, int k, int map[brs][klm], int posisiKiri, int n)
//Modul ini berfungsi menghasilkan pergerakan karakter ketika sedang di tangga 
{
	switch(posisiKiri)
	{
		case 4 : change(b,k,map,n,4);k--;change(b,k,map,n,40);break;
		//Jika isi posisi bawah karakter tangga
		case 3 : change(b,k,map,n,4);k--;change(b,k,map,n,30);break;
		//Jika posisi bawah karakter tali
		case 0 : change(b,k,map,n,4);k--;change(b,k,map,n,71);break;
	}
	return k;
}

int outputLeft30(int b, int k, int map[brs][klm], int posisiKiri, int n)
//Modul ini berfungsi menghasilkan pergerakan karakter ketika sedang di tangga 
{
	switch(posisiKiri)
	{
		case 4 :	change(b,k,map,n,3);k--;change(b,k,map,n,40);break;
		//Jika isi posisi bawah karakter tangga
		case 3 	:	change(b,k,map,n,3);k--;change(b,k,map,n,30);break;
		//Jika posisi bawah karakter tali
	}
	return k;
}

int outputLeft7(int b, int k, int map[brs][klm], int posisiKiri, int n)
//Modul ini berfungsi menghasilkan pergerakan karakter ketika sedang di tangga 
{
	switch(posisiKiri)
	{
		case 8 : change(b,k,map,n,0);k--;change(b,k,map,n,71);break;
		//jika isi posisi sebelah kiri adalah treasure
		case 4 : change(b,k,map,n,0);k--;change(b,k,map,n,40);break;
		//Jika isi posisi bawah karakter tangga
		case 0 : change(b,k,map,n,0);k--;change(b,k,map,n,71);break;
		//jika isi posisi jalan kiri biasa
	}
	return k;
}


int choosewayRight(int b, int k, int map[brs][klm], int n)
//Modul ini akan dipanggil saat user menekan tombol down
//variabel posisi adalah penampung dari isi map[b][k]
//Variabel posisibawah adalah penampung dari nilai yang dikembalikan oleh function checkmapsebelah
{
	int posisi,posisiKanan;
	posisi=map[b][k];
	printf("%d",posisi);
	posisiKanan=map[b][k+1];
	printf("%d",posisiKanan);
	switch(posisi)
	{
		case 40 : k=outputRight40(b,k,map,posisiKanan,n);break;
		//Jika karakter sedang memanjat tangga, maka yang akan dipanggil adalah modul outputdown40
		case 7 : k=outputRight7(b,k,map,posisiKanan,n);break;
		//Jika karakter sedang berjalan biasa di atas bata, maka yang akan dipanggil adalah modul outputdown7 
		case 30 : k=outputRight30(b,k,map,posisiKanan,n);break;
		//Jika karakter sedang ada di tali, maka yang akan dipanggil adalah modul outputdown30
	}
	return k;//Modul ini akan mengembalikan suatu nilai baris yang telah diproses
}

int outputRight40(int b, int k, int map[brs][klm], int posisiKanan, int n)
//Modul ini berfungsi menghasilkan pergerakan karakter ketika sedang di tangga 
{
	switch(posisiKanan)
	{
		case 4 :	change(b,k,map,n,4);k++;change(b,k,map,n,40);break;
		//Jika isi posisi bawah karakter tangga
		case 3 	:	change(b,k,map,n,4);k++;change(b,k,map,n,30);break;
		//Jika posisi bawah karakter tali
		case 0 : change(b,k,map,n,4);k++;change(b,k,map,n,72);break;
	}
	return k;
}

int outputRight30(int b, int k, int map[brs][klm], int posisiKanan, int n)
//Modul ini berfungsi menghasilkan pergerakan karakter ketika sedang di tangga 
{
	switch(posisiKanan)
	{
		case 4 :	change(b,k,map,n,3);k++;change(b,k,map,n,40);break;
		//Jika isi posisi bawah karakter tangga
		case 3 	:	change(b,k,map,n,3);k++;change(b,k,map,n,30);break;
		//Jika posisi bawah karakter tali
	}
	return k;
}

int outputRight7(int b, int k, int map[brs][klm], int posisiKanan, int n)
//Modul ini berfungsi menghasilkan pergerakan karakter ketika sedang di tangga 
{
	switch(posisiKanan)
	{
		case 8 : change(b,k,map,n,0);k++;change(b,k,map,n,72);break;
		case 4 : change(b,k,map,n,0);k++;change(b,k,map,n,40);break;
		//Jika isi posisi bawah karakter tangga
		case 0 : change(b,k,map,n,0);k++;change(b,k,map,n,72);break;
		//jika isi posisi jalan kiri biasa
	}
	return k;
}





