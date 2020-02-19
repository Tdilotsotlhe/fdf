/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:07:01 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/11 10:43:43 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		nlen;
	char	*hs;
	char	*nee;

	hs = (char *)haystack;
	nee = (char *)needle;
	nlen = ft_strlen(needle);
	if (nlen == 0)
		return (hs);
	while (*hs != '\0')
	{
		if (ft_strncmp(hs, nee, nlen) == 0)
			return (hs);
		hs++;
	}
	return (NULL);
}
