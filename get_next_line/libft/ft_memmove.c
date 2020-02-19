/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:44:28 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/07 17:14:35 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*sostr;
	unsigned char	*dstr;

	i = 0;
	dstr = dst;
	sostr = (unsigned char *)src;
	if (dst < src)
	{
		return (ft_memcpy(dst, src, len));
	}
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			dstr[len] = sostr[len];
		}
	}
	return (dst);
}
