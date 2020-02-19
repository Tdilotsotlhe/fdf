/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 16:40:48 by tdilotso          #+#    #+#             */
/*   Updated: 2018/08/16 16:40:51 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
/*
static t_map	*list_malloc(void)
{
	t_map *new_node;

	new_node = (t_map *)malloc(sizeof(t_map));
	if (new_node == NULL)
	{
		perror("Error on malloc");
		exit(1);
	}
	new_node->next = NULL;
	return (new_node);
}*/

static int		map_check(char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		perror("Error on file opening");
		exit(1);
	}
	return (fd);
}

void			free_2d_array(void **array)
{
	int			n;

	n = 0;
	while (array[n])
	{
		free(array[n]);
		n++;
	}
}

static t_map	*createint(int x, int y, char *z)
{
	t_map *new_node;
//	new_node = malloc(sizeof(t_map));//list_malloc();
	new_node = (t_map *)malloc(sizeof(t_map));
	if (new_node == NULL)
	{
		perror("Error on malloc");
		exit(1);
	}
	new_node->next = NULL;
	new_node->orig.x = x;
	new_node->orig.y = y;
	new_node->orig.z = ft_atoi(z);
	return new_node;
}

static t_map	*appendint(t_map *head, int x, int y, char *z)
{
	t_map *cursor;
	t_map *new_node;
	if (head == NULL)
		head = createint(x,y,z);
	else
	{
		cursor = head;
		while (cursor->next != NULL)
			cursor = cursor->next;
		new_node = createint(x, y, z);
		cursor->next = new_node;
	}
	return (head);
}

t_map			*map_read(char *file)
{
	t_map *head;
//	t_read run;

	head->run.py = 0;
	head = NULL;
	head->run.fd = map_check(file);
	while ((head->run.ret = get_next_line(head->run.fd, &head->run.line)) > 0)
	{
		head->run.px = 0;
		head->run.split = ft_strsplit(head->run.line, ' ');
		if (head->run.py == 0 && head->run.line == NULL)
			printf("empty");
		else
			printf("not empty");
		printf("GNL: %s\n",head->run.line);
		while (head->run.split[head->run.px] != NULL)
		{
			head = appendint(head, head->run.px, head->run.py, head->run.split[head->run.px]);
			head->run.px += 1;
		}
		head->run.py += 1;
		free(head->run.line);
		free(head->run.split);
	}
	head->next == NULL ? exit(1) : 1;
	close(head->run.fd);
	head->rows = head->run.py;
	head->cols = head->run.px;
	return (head);
}
