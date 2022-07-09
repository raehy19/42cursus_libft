/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:16:55 by rjeong            #+#    #+#             */
/*   Updated: 2022/07/09 20:28:56 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	fi;

	i = 0;
	if (*(needle) == '\0')
		return (haystack);
	while (*(haystack + i) != '\0' && i < len)
	{
		fi = 0;
		while (*(haystack + i + fi) == *(needle + fi)
			&& *(haystack + i + fi) != '\0')
		{
			if (*(needle + fi + 1) == '\0')
				return (haystack + i);
			fi ++;
		}
		i++;
	}
	return ((void *) 0);
}
