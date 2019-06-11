#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylib.h"

void quit()
{
	struct ContactPoint* temp, * find=start;
	while(find!=NULL){
		temp=find->next;
		free(find);
		find=temp;
	}
}
		
