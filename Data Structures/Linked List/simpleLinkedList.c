/******************************************************************************
                            
                            Pantherofficial404
                            
*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *nextAddress;
};
// This Function Will Take The First Node Address And Accoring To That It will Print All The Values and Address From The LinkedList

void printLinkedList(struct Node *head){
	while(head!=NULL){
		printf("Value %d NextAddress %p\t",head->data,head->nextAddress);
		head = head->nextAddress;
	}
}
int main()
{
	struct Node *head = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;
	
    head = (struct Node*)malloc(sizeof(struct Node));  
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
    
	printf("Memory Allocation Of Head :- %p\n",head);
	printf("Memory Allocation Of Second Node %p\n",second);
	printf("Memory Allocation Of Third Node %p\n",third);
	
//	Input Values Into LinkedList
	head->data = 1;
	head->nextAddress = second;
	
	second->data = 2;
	second->nextAddress = third;
	
	third->data = 3;
	third->nextAddress = NULL;
	
	printLinkedList(head);
	return 0;
}

