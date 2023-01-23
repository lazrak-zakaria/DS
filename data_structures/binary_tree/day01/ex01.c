#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	char		data;
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

void	print_inorder(node *current)
{
	printf("%c", current->left->data);
	printf("%c", current->data);
	printf("%c", current->right->data);
	printf("\n");
}

void	print_postorder(node *current)
{
	printf("%c", current->left->data);
	printf("%c", current->right->data);
	printf("%c", current->data);
	printf("\n");
}


void	print_preorder(node *current)
{
	printf("%c", current->data);
	printf("%c", current->left->data);
	printf("%c", current->right->data);
	printf("\n");
}

void	print(node* current)
{
	if (!current)
		return ;
	print(current->left);
	printf("%c", current->data);
	print(current->right);
}

void	print2(node* current)
{
	if (!current)
		return ;
	print(current->left);
	printf("%c", current->data);
	print(current->right);
}

int	main()
{
	// node *root = ft_new_node('+');
	// node *nd2 = ft_new_node('1');
	// node *nd3 = ft_new_node('2');

	// root->right = nd3;
	// root->left = nd2;
	// print_inorder(root);
	// print_preorder(root);
	// print_postorder(root);


//	(2 + 3) * 4
	node *root = ft_new_node('*');

	node *nd2 = ft_new_node('3');
	node *nd3 = ft_new_node('2');
	node *nd4 = ft_new_node('+');

	node *nc = ft_new_node(')');
	node *no = ft_new_node('(');

	nd4->left = nd3;
	nd4->right = nd2;
	nd3->left = no;
	node *nd5 = ft_new_node('4');

	root->left = nc;
	nc->left = nd4;
	root->right = nd5;
	print(root);
 }    //   				         *
               //          )
//     				+                   4
//			    2        3
//			()