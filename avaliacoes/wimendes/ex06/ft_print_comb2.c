/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:49:06 by wimendes          #+#    #+#             */
/*   Updated: 2025/04/01 22:06:51 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	validation(int i, int j)
{
	char	buffer[7];

	if (i != j && i < j)
	{
		buffer[0] = '0' + i / 10;
		buffer[1] = '0' + i % 10;
		buffer[2] = ' ';
		buffer[3] = '0' + j / 10;
		buffer[4] = '0' + j % 10;
		if (i == 98 && j == 99)
		{
			write(1, buffer, 5);
		}
		else
		{
			buffer[5] = ',';
			buffer[6] = ' ';
			write(1, buffer, 7);
		}
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = 0;
		while (j <= 99)
		{
			validation(i, j);
			j++;
		}
		i++;
	}
}
int main(void)
{
	ft_print_comb2();
	return (0);
}