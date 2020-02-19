/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:29:21 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/11 10:21:19 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*sostr;
	unsigned char	*dstr;
	unsigned char	numc;

	i = 0;
	dstr = (unsigned char *)dst;
	sostr = (unsigned char *)src;
	numc = (unsigned char)c;
	while (i < n)
	{
		dstr[i] = sostr[i];
		if (sostr[i] == numc)
		{
			dstr[i] = numc;
			return (dstr + i + 1);
		}
		i++;
	}
	return (NULL);
}
