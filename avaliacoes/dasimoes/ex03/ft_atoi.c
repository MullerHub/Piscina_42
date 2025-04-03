/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muda-sil <muda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:06:24 by dasimoes          #+#    #+#             */
/*   Updated: 2025/03/31 23:34:35 by muda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	char test[] = " ---+--+1234ab567";
	char test_atoi[] = " -1234ab567";

	printf("%d\n", ft_atoi(test));	
	
	printf("%d\n", atoi(test_atoi));	
	return (0);
}

int	ft_atoi(char *str)
{
	int	signs;
	int	result;

	result = 0;
	signs = 1;
	while
	(*str == '\t' || *str == '\r' || *str == ' '
	|| *str == '\n' || *str == '\v' || *str == '\f'
	)
		str++;
	while (*str == '-' || *str == '+')
	{	
		if (*str == '-')
			signs *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (signs * result);
}
