#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mylib.h"

void insert(void)
{
	struct ContactPoint *newNode = NULL;
	newNode =(struct ContactPoint *) malloc(sizeof(list_entry));
	newNode->next=NULL;
	printf("insert a schoolnumber : ");
	scanf("%s",newNode->schoolnumber);
	printf("insert a name : ");
	scanf("%s",newNode->name);
	printf("insert a zip : ");
	scanf("%s",newNode->zip);
	printf("insert a address : ");
	scanf("%s",newNode->address);

	if (start==NULL){
		start=newNode;
		last=newNode;
	}
	else{
		last->next=newNode;
		last=newNode;
		
	}


}

