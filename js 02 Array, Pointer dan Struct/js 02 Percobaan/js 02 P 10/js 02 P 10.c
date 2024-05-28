// created by 23343075_muhamad akbar fauzan
// js 02 P 10.c
// ADT

#include <stdio.h>

typedef struct{
	int HH, MM, SS;
}jam;

void tampil (jam j) {
	printf("JAM %02d:%02d:%02d\n", j.HH, j.MM, j.SS);
}

int valid(jam j) {
		return  j.HH >= 0 && j.HH <= 23 &&
			j.MM >= 0 && j.MM <= 59 && 
			j.SS >= 0 && j.SS <= 59;
}

jam input() {
	jam j;
	do {
		printf("Masukkan Jam = ");
		scanf("%d", &j.HH);
		printf("Masukkan Menit = ");
		scanf("%d", &j.MM);
		printf("MAsukkan Second = ");
		scanf("%d", &j.SS);
	}
	while (!valid(j));
	return j;
}

int main(){
	jam j;
	j = input();
	tampil(j);
	return 0;
}


