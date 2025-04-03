/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatfer <jonatfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:29:19 by jonatfer          #+#    #+#             */
/*   Updated: 2025/04/01 19:21:06 by jonatfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 65 && *str <= 90))
			return (0);
		str++;
	}
	return (1);
}
// int	main (void)
// {
// 	#include <stdio.h>
// 	printf("Teste 01: %d\n", ft_str_is_uppercase("AAA"));
// 	printf("Teste 02: %d\n", ft_str_is_uppercase("aaaBaa"));
// 	printf("Teste 03: %d\n", ft_str_is_uppercase("aaaaa"));
// 	printf("Teste 04: %d\n", ft_str_is_uppercase(""));
// 	printf("Teste 05: %d\n", ft_str_is_uppercase("123"));
// 	return (0);
// }