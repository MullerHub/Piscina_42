/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmartin <brmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:59:20 by brmartin          #+#    #+#             */
/*   Updated: 2025/04/01 20:27:08 by brmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main()
{
	int a, b, c, d;
	a = 44;
	b = 7;

	printf("Antes da chamada:\n");
	printf("a = %d, b = %d\n", a, b);
	
	ft_div_mod(a, b, &c, &d);
	
    	printf("Depois da chamada:\n");
    	printf("Resultado da divisão (c) = %d\n", c);
    	printf("Resultado do módulo (d) = %d\n", d);
	
	return (0);
}
*/
