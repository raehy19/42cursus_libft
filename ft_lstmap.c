/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:20:44 by rjeong            #+#    #+#             */
/*   Updated: 2022/07/12 14:43:48 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**head;
	t_list	*temp_read;
	t_list	*temp_del;

	if (!lst)
		return (NULL);
	head = malloc(sizeof(t_list *));
	*head = NULL;
	temp_read = lst;
	while (temp_read)
	{
		ft_lstadd_back(head, ft_lstnew(f(temp_read->content)));
		temp_del = temp_read;
		temp_read = temp_read->next;
		if (del)
			ft_lstdelone(temp_del, del);
	}
	return (*head);
}
