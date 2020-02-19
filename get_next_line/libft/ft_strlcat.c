/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 10:46:24 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/16 14:15:19 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dl;
	size_t sl;
	size_t ret;

	i = 0;
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	ret = sl + dl;
	if (dstsize < dl)
		return (sl + dstsize);
	while (src[i] && (dstsize > dl + 1))
		dst[dl++] = src[i++];
	dst[dl] = '\0';
	return (ret);
}
