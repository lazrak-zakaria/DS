void    print_level_order(node *root)
{
    t_queue *q = NULL;
    ft_push(&q, ft_new_node(root));
    while (q)
    {
        node *elem = ft_pop(&q);
        if (elem->left)
            ft_push(&q, ft_new_node(elem->left));
        if (elem->right)
            ft_push(&q, ft_new_node(elem->right));
        printf("%d\n", elem->data);
        free(elem);
    }
}
