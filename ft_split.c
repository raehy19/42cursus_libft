/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:53:13 by rjeong            #+#    #+#             */
/*   Updated: 2022/07/11 15:14:16 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(const char *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 1;
	if (!(*(s + i)))
		return (0);
	while (*(s + i) == c)
		++i;
	while (*(s + i + 1))
	{
		if (*(s + i) == c && *(s + i + 1) != c)
			++cnt;
		++i;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		di;
	int		i;
	int		wi;

	dst = (char **) malloc(sizeof(char *) * ft_count_word(s, c));
	if (!dst)
		return (NULL);
	di = 0;
	i = 0;
	while (di < ft_count_word(s, c))
	{
		while (*(s + i) == c)
			++i;
		wi = 0;
		while (*(s + i + wi) != c && *(s + i + wi))
			++wi;
		*(dst + di) = (char *) malloc(sizeof(char) * (wi + 1));
		if (!(*(dst + di)))
			return (NULL);
		ft_strlcpy(*(dst + di), s + i, wi + 1);
		++di;
		i += wi;
	}
	return (dst);
}
