/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:28:01 by muda-sil          #+#    #+#             */
/*   Updated: 2025/04/02 20:13:20 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
    char dest1[20] = "Compro goiaba? ";
    char src1[] = "ou compro uma passagem!";
	
    char dest2[20] = "Compro goiaba? ";
    char src2[] = "ou compro uma passagem!";
	
    // Testando ft_strcat
    printf("ft_strcat: %s\n", ft_strcat(dest1, src1));
	
    // Testando strcat original
    printf("strcat: %s\n", strcat(dest2, src2));
	
    return (0);
}
*/