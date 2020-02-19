/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:57:04 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/11 10:18:30 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*str;
	unsigned char	num;

	i = 0;
	str = (char *)b;
	num = (unsigned char)c;
	while (i < len)
	{
		str[i] = num;
		i++;
	}
	return (b);
}
