#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "mylib.h"

void display()
{
	struct ContactPoint* find = start;
	while(find!=NULL){
		printf("\nschoolnumber is %s\n",find->schoolnumber);
		printf("name is %s\n",find->name);
		printf("zip is %s\n",find->zip);
		printf("address is %s\n\n",find->address);
		
		find=find->next;
	}
}
		
