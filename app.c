#include "list.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

void help(void);

	list_t *ld = NULL;

main()
{
	int choice;
	int data;
	int result = 0;

	ld = open_list();
	if(ld == NULL) {
		printf("unable to open_list successfully\n");
		exit(1);
	}
		
	help();

	while(1)
	{
		printf("enter the choice 1 to append data, 2 to read_first,3 to read_last,4 for read_next,5 for read_previous, 6 to exit \n");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("enter the data to append\n");
				scanf("%d", &data);
				result = append(ld, data);
				if(result == L_FAIL) {
					printf("Error in malloc allocation under appending data\n");
				}
				break;
			case 2:
				result = read_first(ld, &data);
				if(result == L_EMPTY) {
					printf("List is empty\n");
					break;
				}	
				printf("data from first read is %d\n", data);
				break;
			case 3:
				result = read_last(ld, &data);
				if(result == L_EMPTY) {
					printf("list is empty\n");
					break;
				}
				printf("data from read last is %d\n", data);
				break;	
			case 4:
				result = read_next(ld, &data);
				if(result == L_NO_MORE) {
					printf("No more next data\n");
					break;
				}
				else if(result == L_EMPTY) {
					printf("list is empty\n");
					break;
				}
				printf("data from read next is %d\n", data);
				break;
			case 5:
				result = read_previous(ld, &data);
				if(result == L_NO_MORE) {
					printf("No more previous data\n");
					break;
				} else if(result == L_EMPTY) {
					printf("list is empty\n");
					break;
				}
				printf("data from read previous is %d\n", data);
				break;
			case 6:
				printf("bye\n");
				exit(1);
		}
	}
}
	
void help()
{
	printf("enter choice  1 to append data \n");
	printf("enter choice  2 to read first \n");
	printf("enter choice  3 to read last \n");
	printf("enter choice 4  to read next \n");
	printf("enter choice 5  to read previous \n");
	printf("enter choice 6  to exit \n");
}
		
	
