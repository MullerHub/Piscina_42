/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 09:57:28 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/03 00:50:55 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (size <= i)
		return ((unsigned int) size + ft_strlen(src));
	while (src[j] && ((i + j) < (size - 1)))
	{
		dest[i++] = src[j++];
		size--;
	}
	dest[i] = '\0';
	return (i);
}

#include <stdio.h>
int	main(void)
{
	char text[] = "Oi voce esta bem?";
	char text2[] = " Nao";

	printf("%d", ft_strlcat(text, text2, 21));
}