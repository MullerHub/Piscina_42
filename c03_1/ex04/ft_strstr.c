/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:23:03 by muda-sil          #+#    #+#             */
/*   Updated: 2025/04/02 21:03:58 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (((void *)0));
}

/*
int	main(void)
{
    char str[] = "Hello, World!";
    char to_find[] = "World";
	
    char str2[] = "Hello, World!";
    char to_find2[] = "World";
	
    // Testando ft_strstr
    printf("ft_strstr: %s\n", ft_strstr(str, to_find));
	
    // Testando strstr original
    printf("strstr: %s\n", strstr(str2, to_find2));
	
    return (0);
}
*/