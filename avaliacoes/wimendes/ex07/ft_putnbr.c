/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:49:09 by wimendes          #+#    #+#             */
/*   Updated: 2025/04/01 22:10:11 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	digit = '0' + (nb % 10);
	write(1, &digit, 1);
}

/*
int main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\nInicializando Teste do Exercicio: 07\n", 37);
	write(1, "\n-2:", 4);
	ft_putnbr(-2);
	write(1, "\n-42:", 5);
	ft_putnbr(42);
	write(1, "\n27:", 4);
	ft_putnbr(27);
	write(1, "\nINT_MAX: ", 11);
	ft_putnbr(INT_MAX);
	write(1, "\nINT_MIN: ", 11);
	ft_putnbr(INT_MIN);
	write(1, "\nFinalizando Teste do Exercicio: 07\n", 35);
}*/