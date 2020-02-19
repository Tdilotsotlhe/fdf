/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 14:37:32 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/13 13:44:45 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_wordcount(const char *str, char c)
{
	int decider;
	int wc;
	int i;

	decider = 0;
	wc = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == c)
			decider = 0;
		else if (decider == 0)
		{
			decider = 1;
			wc++;
		}
		i++;
	}
	return (wc);
}

static	size_t	ft_slen(const char *str, char c)
{
	size_t i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	wordc;
	size_t	k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 2));
	if (str == NULL)
		return (NULL);
	wordc = ft_wordcount(s, c);
	while (s[i])
	{
		if (s[i] != c)
		{
			str[k++] = ft_strsub(s, i, ft_slen(&s[i], c));
			i += ft_slen(&s[i], c);
		}
		while (s[i] && s[i] == c)
			i++;
	}
	str[k] = NULL;
	return (str);
}
