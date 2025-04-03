/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmartin <brmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:55:12 by brmartin          #+#    #+#             */
/*   Updated: 2025/04/01 20:26:56 by brmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	mod;

	result = *a / *b;
	mod = *a % *b;
	*a = result;
	*b = mod;
}
/*
#include <stdio.h>
int	main()
{
	int	num1;
	int	num2;
	num1 = 44;
	num2 = 7;

    	printf("Antes da chamada:\n");
    	printf("num1 = %d, num2 = %d\n", num1, num2);
    
	ft_ultimate_div_mod(&num1, &num2);
	
    	printf("Depois da chamada:\n");
    	printf("Resultado da divisão (num1) = %d\n", num1);
    	printf("Resultado do módulo (num2) = %d\n", num2);
	return (0);
}
*/