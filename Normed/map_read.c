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
}

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

static t_map	*createint(int x, int y, char *z)
{
	t_map *new_node;

	new_node = list_malloc();
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
/*
int emptycheck(char **str)
{
	if (str[0] == '\n' || str[1] == '\0')
		return(0);
}*/

t_map			*map_read(char *file)
{
	t_map *head;
	t_read run;

	run.py = 0;
	head = NULL;
	run.fd = map_check(file);
	while ((run.ret = get_next_line(run.fd, &run.line)) > 0)
	{
		run.px = 0;
		run.split = ft_strsplit(run.line, ' ');
		//emptycheck(run.line) == 0 ? exit(1) : 1;
		if (run.py == 0 && run.line == NULL)
			printf("empty");
		else
			printf("not empty");
		printf("GNL: %s\n",run.line);
		while (run.split[run.px] != NULL)
		{
			head = appendint(head, run.px, run.py, run.split[run.px]);
			run.px += 1;
		}
		run.py += 1;
		free(run.line);
	}
	close(run.fd);
	head->rows = run.py;
	head->cols = run.px;
	return (head);
}
