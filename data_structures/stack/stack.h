#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct stack
{
	int				data;
	struct	stack	*next;
} stack;
