#ifndef FDF_H
# define FDF_H

# include "minilibxOSX/mlx.h"
# include "libft/libft.h"
//# include "libft/get_next_line.h"
# include <math.h>
# include <fcntl.h>
# include <stdio.h>
# define WIDTH 1000
# define HEIGHT 1000

typedef struct s_read
{
	int		fd;
	int		ret;
	int		px;
	int		py;
	char	*line;
	//free split
	char	**split;
}				t_read;

typedef struct	s_mxl
{
	void *mxl;
	void *win;
	void *img;
}				t_mxl;

typedef struct s_og
{
	float x;
	float y;
	float z;
}               t_og;

typedef struct s_mod
{
	float x;
	float y;
	float z;
	float angx;
	float angy;
	float angz;
}               t_mod;

typedef struct	s_map
{	
	t_og			orig;
	t_mod			mod;
	t_mxl			inter;
	int				rows;
	int				cols;
	struct s_read	run;
	struct s_map	*next;
}				t_map;

typedef struct	s_draw
{
	float x;
	float y;
	float dx;
	float dy;
	float swap;
	float s1;
	float s2;
	float p;
	float i;
	float temp;
}			 	t_draw;

t_map			*map_read(char *file);
t_map			*projection(t_map *head);
t_map			*rotate_x(t_map *head);
t_map			*rotate_y(t_map *head,float degree);
t_map			*rotate_z(t_map *head,float degree);
void			scaledown(t_map *head);
void			scaleup(t_map *head);
t_draw			draw_setup(t_draw draw, t_map *current, t_map *next);
t_draw			swap(t_draw draw);
t_draw			nextstep(t_draw draw);
void			rotx(t_map *head);
void			line_draw_x(t_map *head);
int				ft_abs(int value);
int				sign(int x);
int				escape(int keycode, t_map *head);
void			free_2d_array(void **array);


#endif