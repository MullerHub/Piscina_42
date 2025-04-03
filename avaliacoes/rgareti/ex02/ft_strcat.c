/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 02:22:17 by rgareti-          #+#    #+#             */
/*   Updated: 2025/03/31 23:11:12 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

 int	main(void)
 {
 	char dest[] = "hello ";
 	char src[] = "word";
 	printf("%s\n", dest);
 	printf("%s\n", src);
 	ft_strcat(dest, src);
 	printf("%s\n", dest);
 	return(0);
 }
