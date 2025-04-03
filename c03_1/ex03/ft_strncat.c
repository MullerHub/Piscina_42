/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:21:48 by muda-sil          #+#    #+#             */
/*   Updated: 2025/04/02 20:17:13 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
		dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char dest[10] = "oi";
    char src[] = "tavo";
	
	char dest2[10] = "oi";
    char src2[] = "tavo";
	
	strncat(dest2, src2, 5);
	printf("strncat: %s \n", dest2);
	
    ft_strncat(dest, src, 5); // Chamada correta
    printf("ft_criada: %s\n", dest); // Exibe o resultado
	return (0);
}
*/