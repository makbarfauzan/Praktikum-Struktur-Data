// created by 23343075_muhamad akbar fauzan
// js 03 P 02.c
// Single Link list without Typedef

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

int main()
{
	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third =NULL;
	
	head	= (struct node*)malloc(sizeof(struct node));
	second	= (struct node*)malloc(sizeof(struct node));
	third	= (struct node*)malloc(sizeof(struct node));
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	return 0;
}