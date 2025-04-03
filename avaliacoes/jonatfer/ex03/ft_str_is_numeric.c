/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatfer <jonatfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:33:28 by jonatfer          #+#    #+#             */
/*   Updated: 2025/04/01 21:00:14 by jonatfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= 48 && *str <= 57))
			return (0);
		str++;
	}
	return (1);
}
// int	main (void)
// {
// 	#include <stdio.h>
// 	printf("Teste 01: %d\n", ft_str_is_numeric("1e2"));
// 	printf("Teste 02: %d\n", ft_str_is_numeric("33"));
// 	printf("Teste 03: %d\n", ft_str_is_numeric(""));
// 	printf("Teste 04: %d\n", ft_str_is_numeric("123"));
// 	return (0);
// }