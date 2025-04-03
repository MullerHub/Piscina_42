/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 20:05:18 by muda-sil          #+#    #+#             */
/*   Updated: 2025/04/02 20:11:01 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

/*
int	main(void)
{
    char str1[] = "abcdef";
    char str2[] = "abcxyz";
    unsigned int n = 9;
	
    // Testando ft_strncmp
    printf("ft_strncmp: até %u num: %d\n", n, ft_strncmp(str1, str2, n));
	
    // Testando strncmp original
    printf("strncmp: até %u num: %d\n", n, strncmp(str1, str2, n));
	
    return (0);
}
*/