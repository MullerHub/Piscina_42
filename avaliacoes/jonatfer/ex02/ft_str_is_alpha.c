/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatfer <jonatfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:26:48 by jonatfer          #+#    #+#             */
/*   Updated: 2025/04/01 19:14:46 by jonatfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
			return (0);
		str++;
	}
	return (1);
}

// int	main (void)
// {
// 	#include <stdio.h>
// 	printf("Teste 01: %d\n", ft_str_is_alpha("Nao Sou todo Alfabetico /t"));
// 	printf("Teste 02: %d\n", ft_str_is_alpha("Alfabetico"));
// 	printf("Teste 03: %d\n", ft_str_is_alpha(""));
// 	printf("Teste 04: %d\n", ft_str_is_alpha("123"));
// 	return (0);
// }