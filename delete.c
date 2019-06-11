#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "mylib.h"
void delete(void)
{
	char schoolnum[20];
	struct ContactPoint * find,*temp;
	printf("enter the schoolnumber : ");
	scanf("%s",schoolnum);
	temp = start;
	find = start;
			
	while(find!=NULL && strcmp(schoolnum,find->schoolnumber )){
		temp=find;
		find=find->next;
	}
	if(find==NULL){
		printf("NULL");
		return;
	}
	if(find==start){
		if(find==last)
			last=NULL;
		start=find->next;
		free(find);
	}else if(find==last){
		temp->next=NULL;
		last=temp;
		free(find);
	}else{	
		temp->next= find->next;
		free(find);
	}
}
	 
