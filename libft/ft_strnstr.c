/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 14:42:45 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/13 13:31:30 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	slen;

	if (*s2 == '\0')
		return ((char *)s1);
	slen = ft_strlen(s2);
	while (*s1 != '\0' && len-- >= slen)
	{
		if (ft_strncmp(s1, s2, slen) == 0 && *s1 == *s2)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
