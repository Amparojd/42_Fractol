/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   barnsley.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:38:33 by ampjimen          #+#    #+#             */
/*   Updated: 2024/03/23 14:52:11 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	iterate_ship(t_fractol *f)
{
	double rng = (double)rand() / 0x7fffffff;

    if (rng <= 0.01) 
	{
        f->re = 0;
        f->im = 0.16 * f->im;
    } 
	else if (rng <= 0.08) 
	{
        double temp_re = f->re;
        f->re = 0.85 * f->re + 0.04 * f->im;
        f->im = -0.04 * temp_re + 0.85 * f->im + 1.6;
    } 
	else if (rng <= 0.15) 
	{
        double temp_re = f->re;
        f->re = 0.2 * f->re - 0.26 * f->im;
        f->im = 0.23 * temp_re + 0.22 * f->im + 1.6;
    }
	else 
	{
        double temp_re = f->re;
        f->re = -0.15 * f->re + 0.28 * f->im;
        f->im = 0.26 * temp_re + 0.24 * f->im + 0.44;
	}
	return (f->iter);
}

void	burning_ship(t_fractol *f)
{
	f->name = "burning_ship";
    f->i = 0;

    while (f->i < X_AXIS) 
	{
        f->j = 0;
        while (f->j < Y_AXIS) 
		{
            f->iter = 0;
            f->re = (f->i - X_AXIS / 2.0) * f->zoom / X_AXIS + f->x;
            f->im = (f->j - Y_AXIS / 2.0) * f->zoom / Y_AXIS + f->y;

            iterate_ship(f);

            if (f->iter >= ITERATION)
                mlx_pixel_put(f->mlx_ptr, f->win_ptr, f->i, f->j, 0x000000);
            else
                mlx_pixel_put(f->mlx_ptr, f->win_ptr, f->i, f->j, f->color + (f->iter * 0x1111));

            f->j++;
        }
        f->i++;
    }
    mlx_clear_window(f->mlx_ptr, f->win_ptr);
    mlx_put_image_to_window(f->mlx_ptr, f->win_ptr, f->img, f->x, f->y);
}