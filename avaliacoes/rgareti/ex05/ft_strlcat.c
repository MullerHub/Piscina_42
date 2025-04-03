/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:42:24 by rgareti-          #+#    #+#             */
/*   Updated: 2025/03/31 23:19:48 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

 int	main(void)
 {
 	unsigned int	size;
 	char			dest[20] = "hello";
 	char			src[] = " world";

 	size = 20;
 	printf("Antes ft_strlcat:\n");
 	printf("Dest: %s\n", dest);
 	printf("Src: %s\n", src);

 	ft_strlcat(dest, src, size);

 	printf("depois ft_strlcat:\n");
 	printf("Dest: %s\n", dest);

 	return (0);
 }