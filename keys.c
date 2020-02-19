/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 16:39:02 by tdilotso          #+#    #+#             */
/*   Updated: 2018/08/16 16:39:10 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		escape(int keycode, t_map *head)
{
	printf("%d\n", keycode);
	if (keycode == 53)
		exit(0);
	if (keycode == 12)
		scaleup(head);
	if (keycode == 13)
		scaledown(head);
	return(0);
}
