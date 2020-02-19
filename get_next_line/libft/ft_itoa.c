/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:48:36 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/16 13:01:29 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_intlen(int n)
{
	size_t i;

	i = 1;
	while (n /= 10)
	{
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	unsigned int	swp;
	size_t			intlen;
	char			*retstr;

	intlen = ft_intlen(n);
	swp = n;
	if (n < 0)
	{
		swp = -n;
		intlen++;
	}
	if (!(retstr = ft_strnew(intlen)))
		return (NULL);
	retstr[--intlen] = swp % 10 + '0';
	while (swp /= 10)
	{
		retstr[--intlen] = swp % 10 + '0';
	}
	if (n < 0)
		retstr[0] = '-';
	return (retstr);
}
