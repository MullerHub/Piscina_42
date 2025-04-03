/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsalusti <dsalusti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:14:08 by dsalusti          #+#    #+#             */
/*   Updated: 2025/04/01 17:43:28 by dsalusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	remain;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size <= dest_size)
	{
		return (size + src_size);
	}
	remain = size - dest_size - 1;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && remain > 0)
	{
		*dest = *src;
		dest++;
		src++;
		remain--;
	}
	*dest = '\0';
	return (dest_size + src_size);
}

// int	main(void)
// {
// 	char	*src = "42Born to code";
// 	char	dest[50] = "1337 ";
// 	ft_strlcat(dest, src, sizeof(dest));
// 	printf("%s", dest);
// 	return (0);
// }