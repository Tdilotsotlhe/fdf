/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 11:53:20 by tdilotso          #+#    #+#             */
/*   Updated: 2018/06/30 15:25:10 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#include <stdlib.h>
#include "libft/libft.h"
# define BUFF_SIZE 16
# define MAXI 2147483647
int		get_next_line(const int fd, char **line);
#endif
