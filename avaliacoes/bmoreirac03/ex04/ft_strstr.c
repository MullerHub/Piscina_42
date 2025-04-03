/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 07:23:10 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/03 00:47:13 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	if (!*to_find)
		return (str);
	while (str[j])
	{
		i = 0;
		while (to_find[i] == str[j + i])
		{
			if (!to_find[i + 1])
				return (&str[j]);
			i++;
		}
		j++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char text[] = "oitdsuoitdbedhasiudoittttdbemamosfnisdoitdbemgsdgsd";
	char text2[] = "oitdbem";

	printf("%s", ft_strstr(text, text2));
}
*/