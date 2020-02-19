/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale_and_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 16:41:11 by tdilotso          #+#    #+#             */
/*   Updated: 2018/08/16 16:41:14 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	scaleup(t_map *head)
{
	t_map *points;
	mlx_clear_window(head->inter.mxl, head->inter.win);
	points = head;
	while (points != NULL)
	{
		points->mod.x = points->mod.x * 1.2;
		points->mod.y = points->mod.y * 1.2;
		points->mod.z = points->mod.z * 1.2;
		points = points->next;
	}
	line_draw_x(head);
}

void	scaledown(t_map *head)
{
	t_map *points;
	mlx_clear_window(head->inter.mxl, head->inter.win);
	points = head;
	while (points != NULL)
	{
		points->mod.x = points->mod.x * 0.8;
		points->mod.y = points->mod.y * 0.8;
		points->mod.z = points->mod.z * 0.8;
		points = points->next;
	}
	line_draw_x(head);
}
