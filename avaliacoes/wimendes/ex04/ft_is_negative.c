/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimendes <wimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:49:01 by wimendes          #+#    #+#             */
/*   Updated: 2025/04/01 20:09:45 by wimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
/*
int main(void)
{
	write(1, "Teste do Exercicio: 04\n", 37);
	ft_is_negative(-1);
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
	ft_is_negative(1);
	write(1, "\n", 1);
	write(1, "Finalizando Teste do Exercicio: 04\n", 35);
	return (0);
}*/