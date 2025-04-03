/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsalusti <dsalusti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 09:56:57 by dsalusti          #+#    #+#             */
/*   Updated: 2025/04/01 10:14:25 by dsalusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

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
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	int		ft_return;
	str1 = "strasdf ng2323";
	str2 = "strafsdi ng2";

	ft_return = ft_strncmp(str1, str2, 5);
	printf("%d", ft_return);
	return (0);
}
*/