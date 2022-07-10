/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:55:45 by rjeong            #+#    #+#             */
/*   Updated: 2022/07/10 17:19:17 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i + 1 < n)
	{
		if (*(((unsigned char *) s1) + i) != *(((unsigned char *) s2) + i))
			break ;
		++i;
	}
	return ((int)(*(((unsigned char *) s1) + i)
		- *(((unsigned char *) s2) + i)));
}
