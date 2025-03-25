/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:31:42 by muda-sil          #+#    #+#             */
/*   Updated: 2025/03/19 21:39:53 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}

/*
#include <stdio.h>
int main(void)
{
	int div, mod;
	ft_div_mod(33, 2, &div, &mod);
	printf("Resultado da divisão: %d\n", div);
	printf("Resultado do módulo: %d\n", mod);
}
*/
