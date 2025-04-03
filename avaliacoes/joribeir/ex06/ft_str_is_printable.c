/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 06:45:55 by joribeir          #+#    #+#             */
/*   Updated: 2025/04/02 21:50:08 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	char *right = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *wrong = "ABCDEFGHIJK\nLMNOPQRSTUVWXYZ";
	char *empty = "";

	if (ft_str_is_printable(empty) == 1)
		write(1, "empty : 1", 9);
	else
		write(1, "0", 1);
	write(1, "\n", 1);

	if (ft_str_is_printable(wrong) == 0)
		write(1, "wrong string : 0", 16);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	if (ft_str_is_printable(right) == 1)
		write(1, "right string : 1", 16);
	else
		write(1, "0", 1);
	return (0);
}