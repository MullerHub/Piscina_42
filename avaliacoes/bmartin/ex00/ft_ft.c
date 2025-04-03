/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmartin < brmartin@student.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:44:30 by brmartin          #+#    #+#             */
/*   Updated: 2025/03/26 19:46:57 by brmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
#include <stdio.h>
int main(void)
{
	int var;
	var = 0;
        printf("ANTES: %i \n", var);
	ft_ft(&var);
	printf("DEPOIS: %i", var);	
	return (0);
}
*/
