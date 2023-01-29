#include "queue.h"

t_queue *ft_new_node(TYPE data)
{
    t_queue *q = malloc(sizeof(t_queue));
    q->data = data;
    q->next = NULL;
    return (q);
}

void    ft_push(t_queue **top, t_queue *q)
{
    t_queue *temp = *top;

    if (!(*top))
    {
        *top = q;
        return ;
    }
    while (temp->next)
            temp = temp->next;
    temp->next = q;
}

TYPE    ft_pop(t_queue **top)
{
    assert(*top != NULL);
    TYPE    answer = (*top)->data;
    *top = (*top)->next;
    return (answer);
}
/*
 int main()
 {
     int i = -1;
     t_queue *q = NULL;
     while(++i < 10)
         ft_push(&q, ft_new_node(i));
    
    
     while(q)
         printf("%d\n",ft_pop(&q));
     return 0;
 }
*/
