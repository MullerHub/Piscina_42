/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:50:44 by muda-sil          #+#    #+#             */
/*   Updated: 2025/03/17 12:59:12 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_putchar(x + '0');
				ft_putchar(y + '0');
				ft_putchar(z + '0');
				if (x != 7 || y != 8 || z != 9)
					write(1, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}

/*
int	main()
{
	ft_print_comb();
	return (0);
}
*/
