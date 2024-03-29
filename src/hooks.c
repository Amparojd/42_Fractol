/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:38:58 by ampjimen          #+#    #+#             */
/*   Updated: 2024/03/17 17:38:58 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	key_hooks(int keycode, t_fractol *f)
{
	if (keycode == LEFT_KEY || keycode == RIGHT_KEY
		|| keycode == UP_KEY || keycode == DOWN_KEY)
		arrow_move(keycode, f);
	if (keycode == A_KEY || keycode == S_KEY)
		change_color(keycode, f);
	if (keycode == ESC_KEY)
		close_window(keycode, f);
	return (0);
}

int	zoom(int keycode, int x, int y, t_fractol *f)
{
	(void)x;
	(void)y;
	if (keycode == MOUSE_DOWN)
	{
		f->zoom /= 0.8;
	}
	if (keycode == MOUSE_UP)
	{
		f->zoom *= 0.8;
	}
	if (!ft_strcmp(f->name, "julia"))
		julia(f);
	else
		check_fractal(f->name, f);
	return (0);
}

int	change_color(int keycode, t_fractol *f)
{
	if (keycode == A_KEY)
		f->color += 0x001111;
	if (keycode == S_KEY)
		f->color -= 0x001111;
	if (!ft_strcmp(f->name, "julia"))
		julia(f);
	else
		check_fractal(f->name, f);
	return (0);
}

int	arrow_move(int keycode, t_fractol *f)
{
	double	move;

	move = 0.05;
	if (keycode == LEFT_KEY)
		f->x -= move * f->zoom;
	if (keycode == RIGHT_KEY)
		f->x += move * f->zoom;
	if (keycode == UP_KEY)
		f->y -= move * f->zoom;
	if (keycode == DOWN_KEY)
		f->y += move * f->zoom;
	if (!ft_strcmp(f->name, "julia"))
		julia(f);
	else
		check_fractal(f->name, f);
	return (0);
}
