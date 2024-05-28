// created by 23343075_muhamad akbar fauzan
// js 03 P 04.c
// Single Link list

#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList {
	int data;
	struct LinkedList *next;
}node;

node *head = NULL;
node *second = NULL;
node *third = NULL;

int main()
{
	head	= (node*)malloc(sizeof(node));
	second	= (node*)malloc(sizeof(node));
	third	= (node*)malloc(sizeof(node));
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	return 0;
}