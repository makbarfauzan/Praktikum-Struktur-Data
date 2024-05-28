// created by 23343075_muhamad akbar fauzan
// js 02 P 05.c
// Structure 1 (Without Typedef)

#include <stdio.h>

struct Mahasiswa{
	char nama[50];
	char jurusan[50];
	int nilai;
};

int main(void)
{
	struct Mahasiswa mhs01;
	
	strcpy(mhs01.nama, "Muhamad Akbar Fauzan");
	strcpy(mhs01.jurusan, "Teknik Informatika\n");
	mhs01.nilai = 100;
	
	printf("%s adalah mahasiswa jurusan %s", mhs01.nama, mhs01.jurusan);
	printf("memperoleh nilai UAS %i \n", mhs01.nilai);
	
	return 0;
}