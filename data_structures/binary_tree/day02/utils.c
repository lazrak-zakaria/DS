#include "tree.h"

node	*ft_new_node(int data)
{
	node	*new;

	new = malloc(sizeof(node)); //protect
	new->data = data;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

void	ft_add(node* root, int *value, char *direction, int values_size)
{
	node	*current;
	int		i;

	if (values_size != strlen(direction))
		return ;
	current = root;
	i = -1;
	while(++i < values_size)
	{
		if (direction[i] == 'L')
		{
			if (!current->left)
			{
				current->left = ft_new_node(value[i]);
				// current = current->left;
			}
			else
			{
				assert(current->left->data == value[i]);
				// current = current->left;
			}
			current = current->left;
		}
		else
		{
			if (!current->right)
			{
				current->right = ft_new_node(value[i]);
				// current = current->right;
			}
			else
			{
				assert(current->right->data == value[i]);
				// current = current->right;
			}
			current = current->right;
		}
	}
}

void	print_inorder(node* current)
{
	if (!current)
		return ;
	print_inorder(current->left);
	printf("%d ", current->data);
	print_inorder(current->right);
}
