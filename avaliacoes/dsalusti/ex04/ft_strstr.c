/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:05:18 by dsalusti          #+#    #+#             */
/*   Updated: 2025/04/01 21:09:58 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*needle;
	int		to_find_len;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	to_find_len = ft_strlen(to_find);
	needle = ((void *)0);
	while (*str)
	{	
		if (!ft_strncmp(str, to_find, to_find_len))
		{
			needle = str;
		}
		str++;
	}
	return (needle);
}

int	main(void)
{
	char	*str = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char	*to_find = "pis";
	char	*ft_res;
	ft_res = ft_strstr(str, to_find);
	printf("%s", ft_res);
	return (0);
}
