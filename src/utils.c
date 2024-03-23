/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:39:26 by ampjimen          #+#    #+#             */
/*   Updated: 2024/03/17 17:39:26 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_draw_pixel(t_fractol *f, int x, int y, int color)
{
	char	*dst;

	dst = f->img_addr + (y * f->img_line_length + x * (f->img_bpp / 8));
	*(unsigned int *)dst = color;
}

int	close_window(int keycode, t_fractol *f)
{
	if (keycode == ESC_KEY)
	{
		mlx_destroy_image(f->mlx_ptr, f->img);
		mlx_destroy_window(f->mlx_ptr, f->win_ptr);
		free(f);
	}
	exit(EXIT_SUCCESS);
	return (0);
}
