#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "mylib.h"

struct ContactPoint* start;
struct ContactPoint* last;

int main(void)
{
	int choice;
	

	start = last = NULL;

	for(;;){
		choice = menuSelect();

		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				search();
				break;

			case 5: 
				quit();
				exit(0);
				break;

		}
	}

	return 0;
}
