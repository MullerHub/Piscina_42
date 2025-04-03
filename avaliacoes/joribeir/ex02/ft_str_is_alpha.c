/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:17:22 by joribeir          #+#    #+#             */
/*   Updated: 2025/04/02 21:34:22 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91)
				|| (str[i] > 96 && str[i] < 123)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	char *right = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *wrong = "ABCDEFGHIJKLMNO1PQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *t_empty = "";

	write (1, "\n", 1);
	if (ft_str_is_alpha(t_empty) == 1)
		write (1, "1", 1);
	else 
		write (1, "0", 1);
	write (1, "\n", 1);

	if (ft_str_is_alpha(wrong) == 0)
		write (1, "0", 1);
	else 
		write (1, "0", 1);
	write (1, "\n", 1);
	if (ft_str_is_alpha(right) == 1)
		write (1, "1", 1);
	else 
		write (1, "0", 1);
	return (0);
}
