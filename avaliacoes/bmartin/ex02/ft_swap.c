/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmartin <brmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:49:30 by brmartin          #+#    #+#             */
/*   Updated: 2025/04/01 20:27:13 by brmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main()
{
	int a = 44;
	int b = 7;
	printf("Antes da troca: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Depois da troca: a = %d, b = %d\n", a, b);
	return (0);
}
*/
