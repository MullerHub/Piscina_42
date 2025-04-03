/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 02:41:56 by rgareti-          #+#    #+#             */
/*   Updated: 2025/03/31 23:11:46 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

 int	main(void)
 {
 	unsigned int	nb;

 	nb = 3;
 	char dest[] = "hello";
 	char src[] = "word";
 	printf("%s\n", dest);
 	printf("%s\n", src);
 	ft_strncat(dest, src, nb);
 	printf("%s\n", dest);
 	return(0);
 }