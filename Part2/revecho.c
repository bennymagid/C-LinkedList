/* Michelle Fernandez (mf2492)
 * revecho.c
 * This program uses the linked list library implemented in part1 and
 * prints out the command line arguments in reverse order. In addition,
 * it looks for the word "dude" among the command line arguments 
 * and report whether it’s there or not.                                                                                          
 */

#include <stdlib.h>
#include "mylist.h"
#include <stdio.h>
#include <string.h>

static void printString(void *p)
{
	printf("%s\n", (char *)p);
}

int main(int argc,char **argv)

{
	// intializes list
	struct List list; 
	initList(&list);
	
	argv++;
	
	while(*argv)		
	{
		addFront(&list, *(argv)); 	//puts argv into a linked list in reverse order
		argv++;				
	}

	traverseList(&list, &printString); //prints list
	
	
	if((*findNode)(&list, "dude", (int(*)(const void*,const void*))(strcmp))==0){ //looks for 'dude'
		printf("\n");
		printf("dude not found\n");
		printf("\n");
	}
	else {
		printf("\n");
		printf("dude found\n");
		printf("\n");
	}
		
	

	
	removeAllNodes(&list);
	
	return 0;
	
	
}