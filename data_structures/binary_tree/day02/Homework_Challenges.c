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

// int	ft_tree_height(node *current)
// {
// 	if (!current)
// 		return (0);
// 	int	left = 1 + ft_tree_height(current->left);
// }

int	main()
{
	node	*root = ft_new_node(1);

	int		arr[]  = {2, 41, 7};
	int		arr1[] = {2, 41, 8};
	int		arr2[] = {2, 5, 9};
	int 	arr3[] = {3, 6, 10};

	ft_add(root, arr,  "LLL", 3);
	ft_add(root, arr1, "LLR", 3);
	ft_add(root, arr2, "LRR", 3);
	ft_add(root, arr3, "RRL", 3);

	//print_inorder(root);
	printf("max = %d\n", ft_tree_max(root));
}
