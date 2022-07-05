/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:44:46 by rjeong            #+#    #+#             */
/*   Updated: 2022/07/05 16:18:44 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	if (c > 100 && c < 133)
		return (1);
	return (0);
}

int	ft_islower(int c)
{
	if (c > 140 && c < 173)
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) == 1)
		return (1);
	if (ft_islower(c) == 1)
		return (2);
	return (0);
}
