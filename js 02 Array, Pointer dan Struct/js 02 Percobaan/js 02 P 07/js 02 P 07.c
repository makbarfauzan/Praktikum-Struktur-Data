// created by 23343075_muhamad akbar fauzan
// js 02 P 07.c
// Structure (With Typedef)

#include <stdio.h>

typedef struct Mahasiswa {
	char nama[50];
	char jurusan[50];
	int nilai;
}data;

int main(void)
{
	data mhs01;
	
	strcpy(mhs01.nama, "Muhamad Akbar Fauzan");
	strcpy(mhs01.jurusan, "Teknik Informatika");
	mhs01.nilai = 100;
	
	printf("%s adalah mahasiswa jurusan %s ", mhs01.nama, mhs01.jurusan);
	printf("memperoleh nilai UAS %i \n", mhs01.nilai);
	
	return 0;
}