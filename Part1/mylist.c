/* Michelle Fernandez (mf2492)
 * mylist.c
 * This program implements a generic singly linked list that can hold
 * any data type. The list is modified through each implementation 
 * of the provided functions.
 */

#include <stdlib.h>
#include "mylist.h"

struct Node *addFront(struct List *list, void *data){
	struct Node *hold = (struct Node*)malloc(sizeof(struct Node));
	
	if (hold == NULL){
		return NULL;
	}
	else {
		hold->data=data;
		hold->next = list->head;
		list->head = hold;
	}
	return hold;
}


void traverseList(struct List *list, void (*f)(void *)){
	struct Node *t=(list->head);
	while(t)	{
		(*f)(t->data);     		
		t=t->next;
	}
}

 
void flipSignDouble(void *data){
	*(double *)data=(-1)*(*(double *)(data));
}


int compareDouble(const void *data1, const void *data2){
	if(*((double *)(data1))==*((double *)(data2))){
		return 0;
	}
	else{
		return 1;
	}
}


struct Node *findNode(struct List *list, const void *dataSought,
					  int (*compar)(const void *, const void *)) {
	struct Node *t=(list->head);
	while(t)	
	{
		if(((*compar)(t->data,dataSought))==0){
			return t;
		}	
		t=t->next;
	}
	return NULL; 	
}


void *popFront(struct List *list){
	if((*list).head==NULL){
		return NULL;
	}
	else
	{
		struct Node *t=(*list).head->next;
		void *dptr=(*list).head->data;	
		free((*list).head);
		
		(*list).head = t;
		return dptr;	
	}
}


void removeAllNodes(struct List *list){
	while((*list).head){
		popFront(list);	
	}
}

struct Node *addAfter(struct List *list,
					  struct Node *prevNode, void *data) {
	if(prevNode==NULL){
		return addFront(list,data);
	}
	
	struct Node *hold=(struct Node*)malloc(sizeof(struct Node));
	
	if(hold == NULL){
		return NULL;
	}
	
	hold->data = data; 
	
	struct Node *t = prevNode->next;
	prevNode->next = hold;
	hold->next = t;
	return hold;
}


void reverseList(struct List *list)
{
	struct Node *current=list->head;
	struct Node *previous = NULL;
	struct Node *next;
	
	while(current)
	{
		next=previous;
		previous=current;
		current=current->next;
		previous->next=next;
	}
	
	list->head=previous;
}

