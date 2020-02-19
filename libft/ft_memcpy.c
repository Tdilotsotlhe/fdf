/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:02:58 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/01 10:14:03 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	char			*sostr;
	char			*dstr;
	unsigned char	num;

	i = 0;
	dstr = (char *)dst;
	sostr = (char *)src;
	num = (unsigned char)n;
	while (i < num)
	{
		dstr[i] = sostr[i];
		i++;
	}
	return (dst);
}
