/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:28:08 by muda-sil          #+#    #+#             */
/*   Updated: 2025/04/02 20:01:10 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);
int	get_sign(char **str);

int	get_sign(char **str)
{
	int	sign;

	sign = 1;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign = -sign;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
	str++;
	sign = get_sign(&str);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("   ---+-a--+1234ab567"));
	printf("%d\n", ft_atoi("    42"));          // Deve retornar 42
	printf("%d\n", ft_atoi("  -42"));         // Deve retornar -42
	printf("%d\n", ft_atoi("abc42"));       // Deve retornar 0
	return 0;
}