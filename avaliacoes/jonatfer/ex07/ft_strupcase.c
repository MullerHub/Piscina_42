/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatfer <jonatfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:31:47 by jonatfer          #+#    #+#             */
/*   Updated: 2025/04/01 19:28:45 by jonatfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	return (ptr);
}

// int main (void)
// {
// 	#include <stdio.h>
// 	char	str[] = "Teste 01 TESte";
// 	printf("Antes: %s\n", str);
// 	printf("Depois: %s\n", ft_strupcase(str));
// 	return (0);
// }