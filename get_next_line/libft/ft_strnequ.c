/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 12:47:10 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/13 13:33:06 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char*)s1;
	str2 = (char*)s2;
	if (s1 && s2)
	{
		if (ft_strncmp(str1, str2, n) == 0)
			return (1);
	}
	return (0);
}
