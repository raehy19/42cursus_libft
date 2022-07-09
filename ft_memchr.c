/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:57:54 by rjeong            #+#    #+#             */
/*   Updated: 2022/07/09 21:51:48 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*(((unsigned char *) s) + i) && i < n)
	{
		if (*(((unsigned char *) s) + i) == (char) c)
			return ((((unsigned char *) s) + i));
		++i;
	}
	return ((void *) 0);
}
