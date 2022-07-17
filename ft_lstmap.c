/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:20:44 by rjeong            #+#    #+#             */
/*   Updated: 2022/07/14 17:45:55 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_mem_alloc_fail(t_list **head, void (*del)(void *))
{
	ft_lstclear(head, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp_read;
	t_list	*temp_write;
	void	*temp_content;

	if (!lst)
		return (NULL);
	temp_read = lst;
	temp_content = f(temp_read->content);
	if (!temp_content)
		return (NULL);
	temp_write = ft_lstnew(temp_content);
	if (!temp_write)
		return (NULL);
	head = temp_write;
	while (temp_read->next)
	{
		temp_read = temp_read->next;
		temp_content = f(temp_read->content);
		if (!temp_content)
			return (ft_mem_alloc_fail(&lst, del));
		temp_write = ft_lstnew(temp_content);
		if (!(temp_write->next))
		{
			free(temp_content);
			return (ft_mem_alloc_fail(&lst, del));
		}
		temp_write = temp_write->next;
	}
	return (head);
}
