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


node	*ft_new_node(int data);
void	ft_add(node* root, int *value, char *direction, int values_size);
void	print_inorder(node* current);
