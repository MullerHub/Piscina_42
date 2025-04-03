/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:46:06 by dsalusti          #+#    #+#             */
/*   Updated: 2025/04/01 21:05:14 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	
	char	*str11;
	char	*str22;
	int		ft_return;
	int		teste;
	
	str1 = "";
	str2 = "";
	
	str11 = "str";
	str22 = "strafsdi";
	
	teste = strcmp(str1, str2);
	ft_return = ft_strcmp(str1, str2);
	printf("minha %d\n", ft_return);
	printf("original %d\n", teste);
	return (0);
}