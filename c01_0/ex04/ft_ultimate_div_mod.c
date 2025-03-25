/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:53:22 by muda-sil          #+#    #+#             */
/*   Updated: 2025/03/19 20:09:03 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

/*
#include <stdio.h>

int main(void)
{
	int num1 = 19;
	int num2 = 3;

	printf("Antes da divisão: num1 = %d, num2 = %d\n", num1, num2);
	ft_ultimate_div_mod(&num1, &num2); 
	// caracter "&" avisa o valor que será alterado
	
	printf("Depois da divisão: num1 = %d, num2 = %d\n", num1, num2);
	return (0);
}
*/
