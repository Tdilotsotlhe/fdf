/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:53:15 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/13 15:53:30 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trim;
	int		i;
	int		c;

	i = 0;
	c = 0;
	trim = "";
	if (s == NULL)
	{
		return (NULL);
	}
	trim = (char *)s;
	c = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (i == c + 1)
		return (ft_strdup(""));
	while ((s[c] == ' ' || s[c] == '\t' || s[c] == '\n') && (c > i))
		c--;
	return (ft_strsub(trim, i, (c - i + 1)));
}
