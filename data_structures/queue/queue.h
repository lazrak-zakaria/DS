#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef int TYPE;

typedef struct s_queue
{
    TYPE            data;
    struct s_queue *next;
} t_queue;

t_queue	*ft_new_node(TYPE data);
void    ft_push(t_queue **top, t_queue *q);
TYPE    ft_pop(t_queue **top);
