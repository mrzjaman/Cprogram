#ifndef __LIST_H
#define __LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node {

	struct node *prev;
	struct node *next;
	int data;
};

typedef struct list {
	
	struct node *first;
	struct node *last;
	struct node *trans;
	int nitems;
} list_t;

#define L_FAIL 0
#define L_EMPTY -1
#define L_SUCCESS 1
#define L_NO_MORE -2

#define is_list_empty(ld) ((ld)->nitems == 0)

#endif
