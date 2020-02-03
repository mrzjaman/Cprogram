#include<stdio.h>
#include<stdlib.h>

struct lut *append(struct lut *, int);
int printall(void);

struct lut
{
	int data;
	struct lut *next;
};

struct lut *head = NULL;

int main()
{
	while(1)
	{
		int n, data;
		printf("Enter 1 to append, 2 to view data, 3 to exit\n");
		scanf("%d",&n);

		switch(n) {
			case 1:
				printf("enter the data to append\n");
				scanf("%d", &data);
				head = append(head, data);
				break;
			case 2:
				printall();
				break;
			case 3:
				printf("bye\n");
				exit(1);
		}
	}
	return 0;
}

struct lut *append(struct lut *head, int data)
{
	struct lut *temp, *new;
	temp = NULL;
	new = NULL;

	if(head == NULL) 
	{
		head = malloc(sizeof *head);
		if(head == NULL) {
			printf("malloc failed to allocate memory\n");
		}
		head->data = data;
		head->next = NULL;
	}
	else
	{
		temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		new = malloc(sizeof *new);
		if(new == NULL){
			printf("malloc failed to allocate memory in new\n");
		}
		new->data = data;
		new->next = NULL;
		temp->next = new;
	}
	return head;
}

int printall()
{
	static int i = 2;
	if(head == NULL){
		printf("No data avail\n");
	}
	else {
		printf("1 data is %d\n", head->data);
		struct lut *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
			printf("%d data is %d\n", i, temp->data);
			i++;
		}	
	}
	return 0;
}

struct lut *delete(struct lut * head, int id)
{
	struct lut *temp = NULL;
	struct lut *ftemp = NULL;

	if(head->id == NULL) {
		head = head->next;
	}
	else {
		while(temp->next->id != id)
		{
			temp = temp->next;
		}
		ftemp = temp->next;
		temp->next = temp->next->next;
	}
	free(ftemp);
	return head;
}

