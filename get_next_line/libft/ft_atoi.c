/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:50:28 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/13 12:21:10 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	checkneg(char str)
{
	if (str == '-')
		return (-1);
	else
		return (1);
}

static	int	skipsign(char c, int i)
{
	if (c == '+' || c == '-')
		i++;
	return (i);
}

static	int	skipspace(const char *str, int i)
{
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == 0)
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int		sign;
	long	ret;
	int		coulen;
	int		i;

	i = 0;
	sign = 1;
	coulen = 0;
	ret = 0;
	i = skipspace(str, i);
	sign = checkneg(str[i]);
	i = skipsign(str[i], i);
	while (str[i] && ft_isdigit(str[i]))
	{
		ret = (ret * 10 + (str[i] - '0'));
		coulen++;
		i++;
	}
	if (ret < 0 && sign == -1)
		return (0);
	if (ret < 0 && sign == 1)
		return (-1);
	return (ret * sign);
}
