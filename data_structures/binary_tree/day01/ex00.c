#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int			data;
	struct node *left;
	struct node	*right;
} node;

node	*ft_new_node(int data)
{
	node	*new;

	new = malloc(sizeof(node)); //protect
	new->data = data;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

int main()
{
	node *root = ft_new_node(1);
	node *nd2 = ft_new_node(2);
	node *nd3 = ft_new_node(3);
	node *nd4 = ft_new_node(4);
	node *nd5 = ft_new_node(5);
	node *nd6 = ft_new_node(6);

	root->left = nd2;
	root->right = nd3;

	nd2->right = nd6;
	nd2->left = nd4;

	nd3->right = nd5;

	printf("nd5 = %d\n", root->right->right->data);
	printf("nd6 = %d\n", root->left->right->data);

}
/*
           1
	2             3
4      6              5

*/

