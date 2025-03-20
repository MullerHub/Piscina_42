/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:19:35 by muda-sil          #+#    #+#             */
/*   Updated: 2025/03/19 21:36:28 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[3];
	int	i;

	str[0] = 'a';
	str[1] = 'b';
	str[2] = '\0';
	ft_putstr(str);
	write(1, "\n", 1); // Quebra de linha
	i = 0;
	while (i < 3)
	{
		printf("Endereço de str[%d] (%c): %p\n", i, str[i], (void *)&str[i]);
		i++;
	}
	return (0);
}
*/
