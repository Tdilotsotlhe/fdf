/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 12:38:41 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/11 12:42:56 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t i;

	if (s1 == NULL)
		return (0);
	if (s2 == NULL)
		return (0);
	i = ft_strlen(s1);
	if (ft_memcmp(s1, s2, i + 1) == 0)
		return (1);
	else
		return (0);
}
