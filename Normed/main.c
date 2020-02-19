/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 16:40:15 by tdilotso          #+#    #+#             */
/*   Updated: 2018/08/16 16:40:18 by tdilotso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int 	validfile(char *str)
{
	unsigned int i;
	char *res; 
	i = ft_strlen(str);
	if (i <= 4)
	{
		perror("invalid file!");
		exit(0);
	}
	res = ft_strsub(str, i - 4, i);
	if(ft_strcmp(res, ".fdf") == 0)
		return (1);
	else
	{
		perror("invalid file!");
		exit(0);
	}
	
}

static int count_elem(t_map *head)
{
	unsigned int i;
	
	i = 1;
	while (head->next != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}

static int 	validmap(t_map *head)
{
	unsigned int i;
	unsigned int mapsize;

	i = count_elem(head);
	mapsize = head->rows * head->cols;
	if(i == mapsize)
		return (1);
	else
	{
		ft_putnbr(i);
		ft_putnbr(mapsize);
		perror("invalid Map!");
		return (0);
	}
}

int main(int argc, char **argv)
{
	t_map *head;
	if (argc > 2 || argc < 2)
	{
		perror("Incorrect number of arguments");
	}

	if (argc == 2)
	 {
		validfile(argv[1]) == 0 ? exit(1): 1;
		head = map_read(argv[1]);
		head->inter.mxl = mlx_init();
		head->inter.win = mlx_new_window(head->inter.mxl, WIDTH, HEIGHT, "FDF");
		head = projection(head);
		validmap(head) == 0 ? exit(1) : 1;
		line_draw_x(head);
		head->inter.img = mlx_new_image(head->inter.mxl,WIDTH,HEIGHT);
		mlx_put_image_to_window(head->inter.mxl,head->inter.win,head->inter.img, WIDTH, HEIGHT);
		mlx_key_hook(head->inter.win, escape, head);
		mlx_loop(head->inter.mxl);
	 }
	return 0;
}
