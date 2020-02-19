/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 16:41:00 by tdilotso          #+#    #+#             */
/*   Updated: 2018/08/17 11:18:33 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_map *projection(t_map *head)
{
	t_map *process;
	float width;
	float height;
//	float angle;
	float mult;

	mult = 1/ sqrt(6);
	process = head;
	width = (WIDTH / head->cols) / 2 ;
	height = (HEIGHT / head->rows) / 2 ;
	while (process != NULL)
	{
		/*
	//	angle = 30 * (M_PI / 180);
		process->mod.y = (cos(angle) * process->orig.y) + (-sin(angle) * process->orig.z / 8);
		process->mod.z = (sin(angle) * process->orig.y) + (cos(angle) * process->orig.z / 8);
		
	//	angle = -20 * (M_PI / 180);
		process->mod.x = (cos(angle) * process->orig.x) + (sin(angle) * process->orig.z / 8);
		process->mod.z = (-sin(angle) * process->orig.y) + (cos(angle) * process->orig.z / 8);

	//	angle =  25 * (M_PI / 180);
		process->mod.x = (cos(angle) * process->mod.x) + (-sin(angle) * process->mod.y);
		process->mod.y = (sin(angle) * process->mod.x) + (cos(angle) * process->mod.y);
		*/
		process->mod.x = (mult * sqrt(3) * process->orig.x) + (mult * 0 * process->orig.y) + (mult * -sqrt(3) * process->orig.z); 
		process->mod.y = (mult * 1 * process->orig.x) + (mult * 2 * process->orig.y) + (mult * 1 * process->orig.z); 
		process->mod.z = (mult * sqrt(2) * process->orig.x) + (mult * -sqrt(2) * process->orig.y) + (mult * sqrt(2) * process->orig.z); 
		process->mod.x = (float)20 * (float)process->mod.x + 200;
		process->mod.y = (float)20 * (float)process->mod.y + 200;
		//process->mod.x = width * process->mod.x;
		//process->mod.y = height * process->mod.y;
		process = process->next;
	}
	return (head);
}
