/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:56:59 by muda-sil          #+#    #+#             */
/*   Updated: 2025/03/19 23:20:07 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
	i++;
	str++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[5];
	int	lenght;

	str[0] = 'O';
	str[1] = 'l';
	str[2] = 'a';
	str[3] = '\0';
	lenght = ft_strlen(str);
	printf("O tamanho da string é: %d\n", lenght);
	return (0);
}
*/
