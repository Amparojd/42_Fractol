/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:34:53 by ampjimen          #+#    #+#             */
/*   Updated: 2023/12/13 17:58:01 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL.H
# define FRACTOL.H

# include <math.h>
# include "../Libft/libft.h"
# include "../minilibx/mlx.h"

# define D (double)

# define IU_CLR 0XC0C0C0
# define UI_DISABLE_CLR ft_hsv_to_hex(v->clr_h, v->clr_s, v->clr_v)

#define PROG_NAME "fractol - ampjimen"

#define WIN_W 1280
#define WIN_H 720

#define MID_W 640
#define MID_H 360

#define MIN_J -3.20
#define MAX_J 3.200

# define MSG0 "usage: ./fractol (Julia / Mandelbrot / Tricorn)"
# define MSG1 "error: Window size must be greater than 1024 x 576."
# define MSG3 "\" isn't a valid fractal name."

# endif
