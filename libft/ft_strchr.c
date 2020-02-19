/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:26:23 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/11 10:40:16 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	size_t			l;
	unsigned char	num;
	char			*w;

	w = (char *)s;
	num = (unsigned char)c;
	i = 0;
	if (w[i] == c)
		return (w);
	else
		l = ft_strlen(w);
	while (i < l)
	{
		if (w[i] != num && i < l)
			i++;
		if (w[i] == num)
			return ((char *)(w + i));
	}
	return (NULL);
}
