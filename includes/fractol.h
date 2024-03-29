/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:38:13 by ampjimen          #+#    #+#             */
/*   Updated: 2024/03/17 17:38:13 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

//# include <X11/keysym.h>
# include <stdio.h>
# include <math.h> 
# include <stdlib.h>
# include <unistd.h>
# include <mlx.h>
# include "../libft/libft.h"

# define X_AXIS 600
# define Y_AXIS 600
#define COLOR 0xff0000
# define ITERATION 70//details in fractals setss

/* Keys */

//Linux Key Definitions
//#define LEFT_KEY XK_Left
//#define RIGHT_KEY XK_Right
//#define DOWN_KEY XK_Down
//#define UP_KEY XK_Up
//#define ESC_KEY XK_Escape
//#define MOUSE_UP 4
//#define MOUSE_DOWN 5
//#define A_KEY XK_a
//#define S_KEY XK_s

/* Keys Mac*/

# define LEFT_KEY 123
# define RIGHT_KEY 124
# define DOWN_KEY 125
# define UP_KEY 126
# define ESC_KEY 53
# define MOUSE_UP 4
# define MOUSE_DOWN 5
# define A_KEY 0
# define S_KEY 1

typedef struct s_fractol
{
	char		*name;
	void		*mlx_ptr;
	void		*win_ptr;
	double		x;
	double		y;
	int			i;
	int			j;
	double		julia_r;
	double		julia_i;
	double		re;
	double		im;
	int			color;
	int			iter;
	double		zoom;
	void		*img;
	char		*img_addr;
	int			img_bpp;
	int			img_line_length;
	int			img_endian;
}	t_fractol;

/* Libft functions */

double		ft_strtodouble(char *s);
double		ft_strtod_helper(char *s, double nbr, int negative, int i);
int			ft_strcmp(const char *s1, const char *s2);

/* Fractals */
void		mandelbrot(t_fractol *f);
int			iterate_mandelbrot(t_fractol *f);
void		burning_ship(t_fractol *f);
int			iterate_ship(t_fractol *f);
void		julia(t_fractol *f);
int			iterate_julia(t_fractol *f);
void		set_julia_values(double *c_re, double *c_im, t_fractol *f);

/* Hooks */
int			change_color(int keycode, t_fractol *f);
int			key_hooks(int keycode, t_fractol *f);
int			zoom(int keycode, int x, int y, t_fractol *f);
int			arrow_move(int keycode, t_fractol *f);

/* Checkers, utils and help */
void		check_fractal(char *fractal_type, t_fractol *f);
void		input_help(void);
void		ft_draw_pixel(t_fractol *f, int x, int y, int color);
void		julia_check(char *fractal_type, char *j_r, char *j_i, t_fractol *f);
int			arg_check(char *argv_1, char *argv_2, char *argv_3);
int			close_window(int keycode, t_fractol *f);

#endif