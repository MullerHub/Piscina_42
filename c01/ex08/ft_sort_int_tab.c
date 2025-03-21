/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:33:54 by muda-sil          #+#    #+#             */
/*   Updated: 2025/03/20 17:44:40 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++; // Avança para o próximo par de elementos
		}
		i++; // Após cada passagem, um número está na posição correta
	}
}



#include <stdio.h>

int	main(void)
{
	int	arr[] = {5, 3, 4, 1, 2}; // Array desordenado
	int	size = 5; // Tamanho do array
	int	i;

	// Antes da ordenação
	printf("Antes da ordenação: ");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	// Chamando a função de ordenação
	ft_sort_int_tab(arr, size);

	// Depois da ordenação
	printf("Depois da ordenação: ");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return (0);
}
