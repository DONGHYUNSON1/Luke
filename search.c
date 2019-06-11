#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "mylib.h"

void search(void)
{
	char schoolnum[20];
	struct ContactPoint *find;
	printf("enter the schoolnumber : ");
	scanf("%s",schoolnum);
	
	find = start;

	while(find!=NULL&& strcmp(schoolnum,find->schoolnumber)){
		find=find->next;
	}
	if(find==NULL){
		printf("NULL");
		return;
	}
	printf("schoolnumber is %s\n",find->schoolnumber);
	printf("name is %s\n",find->name);
	printf("zip is %s\n",find->zip);
	printf("address is %s\n",find->address);

}


