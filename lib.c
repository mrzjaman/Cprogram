#include "list.h"

list_t *open_list()
{
	list_t *ld;
	
	ld = malloc(sizeof *ld);
	if(ld == NULL)
	{
		printf("malloc fails for ld\n");
	}

	ld->first = NULL;
	ld->last = NULL;
	ld->trans = NULL;
	ld->nitems = 0;

	return ld;
}

int append(list_t *ld, int data)
{
	struct node *new;

	new = malloc(sizeof *new);
	if(new == NULL) {
		printf("malloc fails for new\n");
		return L_FAIL;
	}

	new->data = data;
	new->next = NULL;
	new->prev = ld->last;

	if(ld->last != NULL)  {
		ld->last->next = new;
	}
	else {
		ld->first = new;
	}
	 
	ld->last = new;
	ld->nitems++;
	
	return L_SUCCESS;
}

int read_first(list_t *ld, int *data)
{
	if(is_list_empty(ld))
	{
		return L_EMPTY;
	}

	ld->trans = ld->first;
	*data = ld->trans->data;

	return L_SUCCESS;
}

int read_last(list_t *ld, int *data)
{
	if(is_list_empty(ld))
	{
		return L_EMPTY;
	}

	ld->trans = ld->last;
	*data = ld->trans->data;

	return L_SUCCESS;
}

int read_next(list_t *ld, int *data)
{
	if(is_list_empty(ld)) {
		return L_EMPTY;
	}
	else if(ld->trans == NULL) {
		ld->trans = ld->first;
	}
	else if(ld->trans->next == NULL) {
		return L_NO_MORE;
	}
	else {
		ld->trans = ld->trans->next;
	}
		*data = ld->trans->data;
		
		return L_SUCCESS;
}

int read_previous(list_t *ld, int *data)
{
	if(is_list_empty(ld)) {
		return L_EMPTY;
	}
	else if(ld->trans == NULL) {
		ld->trans = ld->last;
	}
	else if(ld->trans->prev == NULL) {
		return L_NO_MORE;
	} 
	else {
		ld->trans = ld->trans->prev;
	}
		*data = ld->trans->data;

		return L_SUCCESS;
}
		

	
