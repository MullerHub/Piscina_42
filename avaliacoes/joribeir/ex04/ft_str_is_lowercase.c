/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 05:48:09 by joribeir          #+#    #+#             */
/*   Updated: 2025/04/02 21:41:31 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 96 && str[i] < 123))
		{
			return (0);
		}
	i++;
	}
	return (1);
}

int main(void)
{
	char	*wrong = "abcdEfghijklmnopqr1stuvwxyz";
	char	*empty = "";
	char	*right = "abcdefghijklmnopqrstuvwxyz";

	if (ft_str_is_lowercase(empty) == 1)
		write (1, "1", 1);
	else 
		write (1, "0", 1);
	write (1, "\n", 1);

	if (ft_str_is_lowercase(wrong) == 0)
		write (1, "0", 1);
	else 
		write (1, "0", 1);
	write (1, "\n", 1);
	if (ft_str_is_lowercase(right) == 1)
		write (1, "1", 1);
	else 
		write (1, "0", 1);
	return (0);
}