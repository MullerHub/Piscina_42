/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:25:58 by brmartin          #+#    #+#             */
/*   Updated: 2025/04/01 21:46:53 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	initial;
	int	final;

	initial = 0;
	final = size - 1;
	while (initial < final)
	{
		temp = tab[initial];
		tab[initial] = tab[final];
		tab[final] = temp;
		initial++;
		final--;
	}
}

int	main()
{	
	int num[7]  = {1, 8, 0, 0, 2, 7, 3}; 
	int i;
	
	i = 0;
    ft_rev_int_tab(num, 7);
	printf("reversed: ");
	while(i < 7)
	{
        	printf("%d ", num[i]);
    		i++;
	}
	return(0);
}
