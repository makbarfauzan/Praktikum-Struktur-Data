// created by 23343075_muhamad akbar fauzan
// js 02 P 04.c
// Array

#include <stdio.h>

int main(){
	int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6}, {4,8}};
	int i,j;
	
	for (i=0; i<5; i++){
		for(j=0; j<2; j++){
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}
	return 0;
}