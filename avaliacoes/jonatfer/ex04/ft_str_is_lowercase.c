/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatfer <jonatfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:33:09 by jonatfer          #+#    #+#             */
/*   Updated: 2025/04/01 19:18:45 by jonatfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 97 && *str <= 122))
			return (0);
		str++;
	}
	return (1);
}
// int main (void)
// {
// 	#include <stdio.h>
// 	printf("Teste 01: %d\n", ft_str_is_lowercase("AAA"));
// 	printf("Teste 02: %d\n", ft_str_is_lowercase("aaaBaa"));
// 	printf("Teste 03: %d\n", ft_str_is_lowercase("aaaaa"));
// 	printf("Teste 04: %d\n", ft_str_is_lowercase(""));
// 	printf("Teste 05: %d\n", ft_str_is_lowercase("123"));
// 	return (0);
// }