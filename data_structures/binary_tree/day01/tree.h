#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef struct node
{
	char		data;
	struct node *left;
	struct node	*right;
} node;
