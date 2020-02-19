/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 11:40:09 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/16 14:51:55 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	char	*str;
	size_t	len;

	len = ft_strlen(s) + 1;
	chr = (char)c;
	str = (char *)s;
	while (len > 0)
	{
		len--;
		if (str[len] == chr)
		{
			return (str + len);
		}
	}
	return (0);
}
