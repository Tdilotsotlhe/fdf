/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:13:01 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/11 12:13:45 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	size_t	i;
	size_t	slen;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	slen = (size_t)ft_strlen(s);
	if (!(tmp = (char *)malloc(slen + 1)))
		return (NULL);
	while (i < slen)
	{
		tmp[i] = f(s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
