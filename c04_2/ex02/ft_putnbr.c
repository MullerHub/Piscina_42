/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:28:10 by muda-sil          #+#    #+#             */
/*   Updated: 2025/04/01 23:17:07 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	buffer[12];
	int		i;

	i = 0;
	if (nb == 0)
		return (write(1, "0", 1), (void)0);
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11), (void)0);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		buffer[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i--)
		write(1, &buffer[i], 1);
}

/*
int	main(void)
{
	ft_putnbr(0);
}
*/
