#include "stack.h"

stack	*ft_newelem(int data)
{
	stack *new = malloc(sizeof(stack)); //protect
	new->data = data;
	new->next = NULL;
	return (new);
}

void	ft_push(stack **top, int data)
{
	stack	*node;

	node = ft_newelem(data);
	if (!*top)
	{
		*top = node;
		return ;
	}
	node->next = *top;
	*top = node;
}

int	ft_pop(stack **top)
{
	assert(*top != NULL);
	stack	*node;
	int		data;

	node = *top;
	*top = node->next;
	data = node->data;
	free(node);
	return (data);
}

// int main()
// {
// 	stack *s = NULL;

// 	int i = 0;
// 	while(i < 10)
// 		ft_push(&s, i++);
// 	while(s)
// 	{
// 		printf("%d\n", ft_pop(&s));
// 	}
// 	system("leaks a.out");
// }