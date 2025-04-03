/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:29:53 by jonatfer          #+#    #+#             */
/*   Updated: 2025/04/02 22:59:18 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str < 127))
			return (0);
		str++;
	}
	return (1);
}

// int	main (void)
// {
// 	#include <stdio.h>
// 	printf("Teste 01: %d\n", ft_str_is_printable("AAA"));
// 	printf("Teste 02: %d\n", ft_str_is_printable("aaaBaa??"));
// 	printf("Teste 03: %d\n", ft_str_is_printable("aaaaa      \n"));
// 	printf("Teste 04: %d\n", ft_str_is_printable(""));
// 	printf("Teste 05: %d\n", ft_str_is_printable("123 \t"));
// 	return (0);
// }