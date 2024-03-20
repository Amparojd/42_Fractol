/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:38:50 by ampjimen          #+#    #+#             */
/*   Updated: 2024/03/17 17:38:50 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	input_help(void)
{
	ft_printf(" _______________________________\n");
	ft_printf("|                               |\n");
	ft_printf("| Use: ./fractol [fractal_name] |\n");
	ft_printf("|_______________________________|\n");
	ft_printf("|      Available fractals:      |\n");
	ft_printf("|                               |\n");
	ft_printf("|        [mandelbrot]           |\n");
	ft_printf("|        [julia_1]              |\n");
	ft_printf("|        [julia_2]              |\n");
	ft_printf("|        [julia_3]              |\n");
	ft_printf("|        [burning_ship]         |\n");
	ft_printf("|        *[julia]               |\n");
	ft_printf("|_______________________________|\n\n");
	ft_printf(" *If you choose [julia]\n");
	ft_printf(" Enter the real and imaginary parts between -2 and 2\n");
	ft_printf(" Example:    ./fractol julia -0.2321 -0.835\n\n");
	exit(EXIT_FAILURE);
}
