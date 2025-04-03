/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimendes <wimendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:49:04 by wimendes          #+#    #+#             */
/*   Updated: 2025/04/01 20:05:52 by wimendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	validation(int i, int j, int k)
{
	char	buffer[5];

	buffer[0] = '0' + i;
	buffer[1] = '0' + j;
	buffer[2] = '0' + k;
	if ((i == 7 && j == 8 && k == 9))
	{
		write(1, buffer, 3);
	}
	else
	{
		buffer[3] = ',';
		buffer[4] = ' ';
		write(1, buffer, 5);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = 1;
		while (j <= 8)
		{
			k = 2;
			while (k <= 9)
			{
				if (i != j && j != k && k != i && i < j && j < k && k > i)
				{
					validation(i, j, k);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
/*
int main(void)
{
	ft_print_comb();
	return (0);
}
*/