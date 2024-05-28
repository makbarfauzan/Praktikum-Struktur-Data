// created by 23343075_muhamad akbar fauzan
// js 02 P 08.c
// ADT

#include <stdio.h>
#include <conio.h>

typedef int angka;
typedef char huruf;

int main(){
	angka umur;
	huruf h;
	huruf nama[10];
	
	printf("Masukkan umur anda : ");
	scanf("%d", &umur);
	printf("Umur anda adalah %d", umur);
	printf("\nMasukkan huruf : "); h=getche ();
	printf("\nHuruf Anda %c", h);
	printf("\nMasukkan nama : "); 
	scanf("%s", nama);
	printf("Nama anda %s", nama);
	getch();
}