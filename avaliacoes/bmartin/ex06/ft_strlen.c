/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmartin <brmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:29:15 by brmartin          #+#    #+#             */
/*   Updated: 2025/04/01 20:26:19 by brmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char	*str);

int	ft_strlen(char	*str)
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
int	main()
{
	char tst_str[8] = {'T', 'e', 's', 't', 'a', 'n', 'u', '\0'};
	
	int len = ft_strlen(tst_str);
	printf("O comprimento da string é: %d\n", len); 
	return (0);
}
*/

