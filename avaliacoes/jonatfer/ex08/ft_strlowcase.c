/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatfer <jonatfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:32:14 by jonatfer          #+#    #+#             */
/*   Updated: 2025/04/01 21:00:16 by jonatfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
	}
	return (ptr);
}

// int	main (void)
// {
// 	#include <stdio.h>
// 	char	str[] = "Teste 01 TESte";
// 	printf("Antes: %s\n", str);
// 	printf("Depois: %s\n", ft_strlowcase(str));
// 	return (0);
// }
