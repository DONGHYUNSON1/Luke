#ifndef MYLIB_H_
#define MYLIB_H_ 

struct ContactPoint{
	char schoolnumber[20];
	char name[40];
	char zip[40];
	char address[40];
	struct ContactPoint *next;
}list_entry;

extern struct ContactPoint *start;
extern struct ContactPoint *last;

int menuSelect(void);
void insert(void);
void delete(void);
void search(void);
void display(void);
void quit(void);




#endif
