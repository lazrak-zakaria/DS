#include "tree.h"

int	ft_max(int a, int b)
{
	return (a > b ? a : b);
}

int	ft_tree_max(node *current) /* positive nums only */
{
	if (!current)
		return (-1);
	int mx = ft_max(ft_tree_max(current->left), ft_tree_max(current->right));
	return (ft_max(mx, current->data));
}

int	ft_tree_height(node *current, int h)
{
	int	l;
	int	r;

	l = 0;
	r = 0;
	if (current->left)
		l = ft_tree_height(current->left, h + 1);
	else
		l = h;
 	if (current->right)
		r = ft_tree_height(current->right, h + 1);
	else
		r = h;
	return(ft_max(l,r));
}

int	ft_count_all_nodes(node *current, int n)
{
	int	l;
	int	r;

	if (current->left)
		n += 1 + ft_count_all_nodes(current->left, 0);
	if (current->right)
		n += 1 + ft_count_all_nodes(current->right, 0);
	return (n);
}

int	ft_count_leaf_nodes(node *current, int n)
{
	if (!current->left && !current->right)
		return (1);
	if (current->left)
		n += ft_count_leaf_nodes(current->left, 0);
	if (current->right)
		n += ft_count_leaf_nodes(current->right, 0);
	return (n);
}

int	ft_search(node *current, int value)
{
	if (!current)
		return (0);
	if (current->data == value)
		return (1);
	int	n = ft_search(current->left, value);
	int nn = ft_search(current->right, value);
	return (n + nn);
}

int	main()
{
	node	*root = ft_new_node(1);

	int		arr[]  = {2, 41, 7};
	int		arr1[] = {2, 41, 8};
	int		arr2[] = {2, 5, 9};
	int 	arr3[] = {3, 6, 10};
	//int 	arr4[] = {3, 6, 10, 98};
	int 	arr4[] = {3, 6,66};



	ft_add(root, arr,  "LLL", 3);
	ft_add(root, arr1, "LLR", 3);
	ft_add(root, arr2, "LRR", 3);
	ft_add(root, arr3, "RRL", 3);
	ft_add(root, arr4, "RRR", 3);

	print_inorder(root);
	printf("\n");
	printf("max = %d\n", ft_tree_max(root));
	printf("height = %d\n", ft_tree_height(root, 0));
	printf("num of nodes = %d\n", ft_count_all_nodes(root, 1));
	printf("num of leaf nodes = %d\n", ft_count_leaf_nodes(root, 0));
	printf("is exist ? --> %d\n", ft_search(root, 7));
	printf("is exist ? --> %d\n", ft_search(root, 70));

}
