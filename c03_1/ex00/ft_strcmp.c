/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:29:04 by muda-sil          #+#    #+#             */
/*   Updated: 2025/04/02 20:06:47 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main(void)
{
	char	str1[] = "123";
	char	dest1[9] = "123";

	char	str22[] = "123";
	char	dest22[9] = "123";

	printf("Comparando original'%s' e '%s': %d\n",
	 str1, dest1, ft_strcmp(str1, dest1));
    printf("Comparando o meu a'%s' e '%s': %d\n", 
	str22, dest22, ft_strcmp(str22, dest22));
	return (0);
}
*/