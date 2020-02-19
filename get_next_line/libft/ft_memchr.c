/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:24:54 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/11 10:22:24 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	num;

	i = 0;
	str = (unsigned char *)s;
	num = (unsigned char)c;
	while (i < n)
	{
		if (str[i] != num)
			i++;
		else
			return ((void *)(str + i));
	}
	return (NULL);
}
