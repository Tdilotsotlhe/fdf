/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:54:07 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/01 10:22:47 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int *ptr;

	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = ft_memset(ptr, 0, size);
	}
	return (ptr);
}
