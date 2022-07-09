/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:34:36 by rjeong            #+#    #+#             */
/*   Updated: 2022/07/09 21:32:53 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_delete_whitespace(const char *str, int *i)
{
	while ((8 < *(str + *i) && *(str + *i) < 14) || *(str + *i) == ' ')
		++(*i);
}

int	ft_cal_sign(const char *str, int *i)
{
	int	sign;

	sign = 1;
	if (ft_isdigit(*(str + *i)))
	{
		if (*(str + *i) == '-')
			sign = -1;
		++(*i);
	}
	return (sign);
}

int	atoi(const char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	ft_delete_whitespace(str, &i);
	sign = ft_cal_sign(str, &i);
	result = 0;
	while (ft_isdigit(*(str + i)))
	{
		result = result * 10 + (long long)(*(str + i) - '0');
		++i;
	}
	result = result * sign;
	return ((int)result);
}
