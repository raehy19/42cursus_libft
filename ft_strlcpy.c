/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:17:10 by rjeong            #+#    #+#             */
/*   Updated: 2022/07/08 22:51:14 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	while (i < dstsize - 1)
	{
		if (ft_strlen(src) > dstsize - 1)
			*(dst + i) = *(src + i);
		else
		{
			if (ft_strlen(src) < i)
				*(dst + i) = '\0';
			else
				*(dst + i) = *(src + i);
		}
		++i;
	}
	if (dstsize > 0)
		*(dst + i) = '\0';
	return (ft_strlen(src));
}
