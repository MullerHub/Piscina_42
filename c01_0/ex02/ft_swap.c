/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:03:47 by muda-sil          #+#    #+#             */
/*   Updated: 2025/03/18 17:11:57 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 10;

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    ft_swap(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);
    return 0;
}
*/
