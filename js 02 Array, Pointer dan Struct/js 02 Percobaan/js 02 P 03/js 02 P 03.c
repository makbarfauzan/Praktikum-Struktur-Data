// created by 23343075_muhamad akbar fauzan
// js 02 P 03.c
// Array

#include <stdio.h>

int main(){
	int n;
	int angka[n];
	
	printf("Masukkan banyaknya bilangan : ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		printf("Masukkan angka ke %d : ", i+1);
		scanf("%d", &angka[i]);
	}
	
	for(int i=0; i<n; i++){
		printf("Angka ke %d : %d\n", i+1, angka[i]);
	}
	
	getchar();
	return 0;
}